#include "pdcurses/curses.h"
#include <chrono>
#include <thread>

#define GET_TIME_MS std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count()

struct vec
{
	int x = 0;
	int y = 0;

	vec& operator=(const vec& a)
	{
		x = a.x;
		y = a.y;
		return *this;
	}
	vec& operator+(const vec& a)
	{
		x += a.x;
		y += a.y;
		return *this;
	}
	vec& operator+=(const vec& a)
	{
		x += a.x;
		y += a.y;
		return *this;

	}
	vec& operator-(const vec& a)
	{
		x -= a.x;
		y -= a.y;
		return *this;

	}
	vec& operator-=(const vec& a)
	{
		x -= a.x;
		y -= a.y;
		return *this;
	}

	bool operator==(const vec& a)
	{
		return x == a.x && y == a.y;
	}

	bool operator!=(const vec& a)
	{
		return x != a.x || y != a.y;
	}
};

class DrawableObject
{
public:
	chtype character = (chtype)'x';
	vec position;

public:
	DrawableObject(char _character)
	{
		this->character = (chtype)_character;
	}

	virtual void Draw()
	{
		mvaddch(position.y, position.x, character);
	}
};

class SnakePart: public DrawableObject
{
	SnakePart* nextPart = nullptr;

public:
	SnakePart(vec _position, SnakePart* _nextPart): DrawableObject('O')
	{
		this->position = _position;
		if (_nextPart)
			this->nextPart = _nextPart;
	}

	virtual void Draw()
	{
		mvaddch(position.y, position.x, character); //draw char at y x
		if (nextPart) //if there's another snake part
			nextPart->SnakePart::Draw(); //tell it to draw as well
	}

	void Move(vec amt)
	{
		vec oldPosition = position; //save old pos
		position += amt; //move by amount
		if (nextPart) //if there's another snake part
			nextPart->UpdatePos(oldPosition); //tell it to take our old pos
	}

	void UpdatePos(vec newPos)
	{
		vec oldPosition = position; //save current pos
		position = newPos; //update pos
		if (nextPart) //if there's another snake part
			nextPart->UpdatePos(oldPosition); //tell it to take our old pos
	}
};

class FoodPill: public DrawableObject
{
public:
	FoodPill(vec _position): DrawableObject('x')
	{
		this->position = _position;
	}

	bool CheckHit(vec snakePos)
	{
		if (snakePos == position) //if the snake position is same as the pill
			return true; //hit
		return false; //else no hit
	}

	void Move(vec _position)
	{
		position = _position;
	}
};

bool KeyPressed(char* key)
{
	const int termChar = getch(); //get the most recent char from the terminal
	flushinp(); //clear any other chars in terminal
	if (termChar == ERR) //if no char present
		return false; //no key pressed
	*key = (char)termChar; //else must be a key pressed so cast it to a char and write into key
	return true; //key pressed
}

vec ChangeDirection(vec originalDir, vec newDir)
{
	if (originalDir.x * newDir.x < 0 || originalDir.y * newDir.y < 0) //if going back on itself
		return originalDir; //ignore invalid new direction
	return newDir; //new direction must be valid so return it
}

const int randTable[] = { 11164, 36318, 75061, 37674, 26320, 75100, 10431, 20418, 19228, 91792,
21215, 91791, 76831, 58678, 87054, 31687, 93205, 43685, 19732, 8468,
10438, 44482, 66558, 37649, 8882, 90870, 12462, 41810, 1806, 2977,
36792, 26236, 33266, 66583, 60881, 97395, 20461, 36742, 2852, 50564,
73944, 4773, 12032, 51414, 82384, 38370, 249, 80709, 72605, 67497,
49563, 12872, 14063, 93104, 78483, 72717, 68714, 18048, 25005, 4151,
64208, 48237, 41701, 73117, 33242, 42314, 83049, 21933, 92813, 4763,
51486, 72875, 38605, 29341, 80749, 80151, 33835, 52602, 79147, 8868,
99756, 26360, 64516, 17971, 48478, 9610, 4638, 17141, 9227, 10606,
71325, 55217, 13015, 72907, 431, 45117, 33827, 92873, 2953 }; //https://www.nist.gov/system/files/documents/2017/04/28/AppenB-HB133-05-Z.pdf

int Random()
{
	int randomIndex = GET_TIME_MS % 100; //get last two digits
	return randTable[randomIndex]; //get random number from table
}

vec RandomPos()
{
	int initalRandom = Random(); //get a random number between 0 and 99999
	float pct = (float)initalRandom / 99999; //get a percentage from this value
	int x = std::round(pct * 120); //round and clamp to 120 (default width of term)
	initalRandom = Random(); //get a new random number
	pct = initalRandom / 99999; //..
	int y = std::round(pct * 37) + 3; //.. 40 (default height of term I think) plus the score at the top
	return vec(x, y); //construct vec and return
}