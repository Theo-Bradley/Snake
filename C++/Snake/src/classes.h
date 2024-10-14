#include "pdcurses/curses.h"
#include <chrono>
#include <thread>

#define GET_TIME_MS std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count()

class DrawableObject
{
public:
	chtype character = (chtype)'x';

public:
	DrawableObject(char _character)
	{
		this->character = (chtype)_character;
	}

	virtual void Draw()
	{
		addch(character);
	}
};

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
};

class SnakePart: public DrawableObject
{
	vec position;
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