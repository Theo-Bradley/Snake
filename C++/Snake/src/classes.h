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
		mvaddch(position.y, position.x, character);
		if (nextPart)
			nextPart->SnakePart::Draw();
	}

	void Move(vec amt)
	{
		vec oldPosition = position;
		position += amt;
		if (nextPart)
			nextPart->UpdatePos(oldPosition);
	}

	void UpdatePos(vec newPos)
	{
		vec oldPosition = position;
		position = newPos;
		if (nextPart)
			nextPart->UpdatePos(oldPosition);
	}
};

bool KeyPressed(char* key)
{
	const int termChar = getch();
	flushinp();
	if (termChar == ERR)
		return false;
	*key = (char)termChar;
	return true;
}

vec ChangeDirection(vec originalDir, vec newDir)
{
	if (originalDir.x * newDir.x < 0 || originalDir.y * newDir.y < 0)
		return originalDir;
	return newDir;
}