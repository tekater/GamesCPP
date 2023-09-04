#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };

eDirection dir;

class Game {
protected:
    bool gameOver;

    int x;
    int y;

    int score;

    /*class Map  {
    protected:*/
        const int width = 20;
        const int heigth = 20;

        int fruitX;
        int fruitY;

        int tailX[100];
        int tailY[100];

        double spd;
        int nTail;
    /*public:
        friend class Game;*/
public:
        void Draw() {

            Sleep(speed());
            system("cls");

            for (int i = 0; i < width + 1; i++) {
                cout << "#";
            }
            cout << endl;

            for (int i = 0; i < heigth; i++)
            {
                for (int j = 0; j < width; j++)
                {
                    if (j == 0 || j == width - 1) {
                        cout << "#";
                    }
                    if (i == y && j == x) {
                        cout << "0";
                    }
                    else if (i == fruitY && j == fruitX) {
                        cout << "F";
                    }
                    else {
                        bool print = false;

                        for (int k = 0; k < nTail; k++) {
                            if (tailX[k] == j && tailY[k] == i) {
                                print = true;
                                cout << "o";
                            }
                        }

                        if (!print)
                            cout << " ";
                    }

                }

                cout << endl;
            }

            for (int i = 0; i < width + 1; i++) {
                cout << "#";
            }

            cout << endl;
            cout << "Score: " << score << endl;
            cout << "Speed: " << spd << endl;

        }

        void Fruit() {
            if (x == fruitX && y == fruitY) {
                score += 10;

                fruitX = rand() % width;
                fruitY = rand() % heigth;

                nTail++;
            }
        }
    //};

    /*class Snake {
    protected:*/
        /*int tailX[100];
        int tailY[100];

        double spd;
        int nTail;*/
    //public:
        double speed() {
            double s = 500;
            spd = 1.0;
            if (score >= 50) {
                s = 450;
                spd = 1.5;
            }
            else if (score >= 100) {
                s = 400;
                spd = 2.0;
            }
            else if (score >= 150) {
                s = 350;
                spd = 2.5;
            }
            else if (score >= 200) {
                s = 300;
                spd = 3.0;
            }
            else if (score >= 250) {
                s = 250;
                spd = 3.5;
            }
            else if (score >= 300) {
                s = 200;
                spd = 4.0;
            }
            else if (score >= 350) {
                s = 150;
                spd = 4.5;
            }
            else if (score >= 400) {
                s = 100;
                spd = 5.0;
            }


            return s;
        }

        void Movement() {
            switch (dir)
            {
            case LEFT:
                x--;
                break;
            case RIGHT:
                x++;
                break;
            case UP:
                y--;
                break;
            case DOWN:
                y++;
                break;
            }

            if (x >= width - 1) {
                x = 0;
            }
            else if (x < 0) {
                x = width - 2;
            }

            if (y >= heigth) {
                y = 0;
            }
            else if (y < 0) {
                y = heigth - 1;
            }
        }
    //};

//public:

    void Setup() {
        gameOver = false;

        dir = STOP;

        x = width / 2 - 1;
        y = heigth / 2 - 1;

        fruitX = rand() % width;
        fruitY = rand() % heigth;

        score = 0;
    }

    void Input() {
        if (_kbhit()) {

            switch (_getch())
            {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameOver = true;
                break;
            }
        }
    }

    void Logic() {
        int prevX = tailX[0];
        int prevY = tailY[0];

        int prev2X, prev2Y;

        tailX[0] = x;
        tailY[0] = y;

        for (int i = 1; i < nTail; i++) {
            prev2X = tailX[i];
            prev2Y = tailY[i];

            tailX[i] = prevX;
            tailY[i] = prevY;

            prevX = prev2X;
            prevY = prev2Y;
        }

        Movement();

        for (int i = 0; i < nTail; i++) {
            if (tailX[i] == x && tailY[i] == y) {
                gameOver = true;
            }
        }

        Fruit();
    }
    
    bool getOver() {
        return gameOver;
    }
};


int main() {
    Game snake;

    snake.Setup();

    while (!snake.getOver()) {

        snake.Draw();
        snake.Input();
        snake.Logic();

    }

    return 0;
}
