// Snake.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define PDC_RGB
#include "classes.h"
//#include "pdcurses/curses.h"

const int framerate = 10; //target framerate in frames per second
bool running = true;
const char* scoreText = "Score:\0";

int main()
{
    long long int time = GET_TIME_MS;

    WINDOW* window = initscr();
    nodelay(window, true); //don't wait for input
    noecho();
    curs_set(0);
    long long int nextFrameStart = time;

    SnakePart* primaryPart = new SnakePart(vec(0, 2), 
        new SnakePart(vec(0, 3),
        new SnakePart(vec(0, 4), nullptr))); //define a chain of 3 snake parts returning a reference to the first
    vec moveDir = vec(1, 0);

    int score = 0;

    FoodPill foodPill = FoodPill(vec(5, 5));
    while (running)
    {
        time = GET_TIME_MS;

        if (time >= nextFrameStart) //is it time to start running frame?
        { //run frame
            char key;

            if (KeyPressed(&key)) //if a key is pressed
            {
                switch (key)
                {
                    case 'q':
                        return 0; //exit
                    case 'w':
                        moveDir = ChangeDirection(moveDir, vec(0, -1));
                        break;
                    case 'a':
                        moveDir = ChangeDirection(moveDir, vec(-1, 0));
                        break;
                    case 's':
                        moveDir = ChangeDirection(moveDir, vec(0, 1));
                        break;
                    case 'd':
                        moveDir = ChangeDirection(moveDir, vec(1, 0));
                        break;
                }
            }

            primaryPart->Move(moveDir); //move snake
            if (foodPill.CheckHit(primaryPart->position))
            {
                score += 1;
                foodPill.Move(RandomPos());
            }

            //rendering:
            erase(); //clear screen for next frame
            printw(scoreText);
            mvaddstr(0, 8, std::to_string(score).c_str());
            mvaddch(1, 0, '_');
            for (int i = 1; i < 120; i++)
            {
                addch('_');
            }
            primaryPart->Draw(); //draw snake
            foodPill.Draw();
            wrefresh(window); //refresh screen

            nextFrameStart += 1000 / framerate; //calculate start time for next frame

            if (time > nextFrameStart) //if late to start next frame
            {
                //std::cout << "Warning: Slow Frame Detected\n";
            }
        }
        else //if not time to run frame then wait (avoid resource hogging)
            std::this_thread::sleep_for(std::chrono::milliseconds(1)); //wait for 1ms
    }

    system("pause");

    endwin();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
