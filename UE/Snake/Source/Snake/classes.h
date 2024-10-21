#include "pdcurses/curses.h"

class DrawableObject
{
	char character = x;

	public DrawableObject(char _character)
	{
		this->character = _character;
	}

	public virtual void Draw(WINDOW* window)
	{
		waddch(window, (chtype)character);
	}
};

class SnakePart:public DrawableObject
{
	SnakePart()
	{
		DrawableObject('o');
	}
};