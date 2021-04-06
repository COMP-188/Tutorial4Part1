/** \file Main.cpp
*   \brief Main driver of a programm
*   \details Program which can draw different shapes like...
*   \author Dmytro Venchak
*   \version 0.1
*   \date 29/03/2021
*/

  //user defined lib
#include "Shapes.h"

  //Language libs
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>

using namespace std;


/**
* The <code>main</code> driver of a program
* <BR>
* @return Returns <code>0</code>
*
*/
int main()
{

    srand(time(NULL));
    int randomValue = rand() % 100;
    int const MAX_ARRAYS = 10;
    bool done = 0;
    int choice, num;

    int shapeTy[MAX_ARRAYS], shapeLen[MAX_ARRAYS];
    char shapeCh[MAX_ARRAYS];

    cout << " Welcome to the drawer \n";
    cout << "      1 to print a horizontal line\n";
    cout << "      2 to print a vertical line\n";
    cout << "      3 to print a square\n";
    cout << "      4 to print a rectangle\n";
    cout << "      5 to print 10 random functions\n";
    cout << "      6 to quit\n";

    while (!done) {
        int length, height, size;
        char ch;

        cout << "\n Enter your option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            do {
                cout << " Enter how long the line should be: ";
                cin >> length;
            } while (length < 1);
            cout << " What character has to be used for drawing: ";
            cin >> ch;
            drawHorizontalLine(length, ch);
            break;
        case 2:
            do {
                cout << " Enter how long the line should be: ";
                cin >> height;
            } while (height < 1);
            cout << " What character has to be used for drawing: ";
            cin >> ch;
            drawVerticalLine(height, ch);

            break;
        case 3:
            do {
                cout << " Enter the size of a square: ";
                cin >> size;
            } while (size < 1);
            cout << " What character has to be used for drawing: ";
            cin >> ch;
            drawSquare(size, ch);

            break;
        case 4:
            do {
                cout << " Enter the height of a rectangle: ";
                cin >> height;
            } while (height < 1);
            do {
                cout << " Enter the length of a rectangle: ";
                cin >> length;
            } while (height < 1);
            cout << " What character has to be used for drawing: ";
            cin >> ch;
            drawRectangle(length, height, ch);

            break;
        case 5:

            initializeShapes(shapeTy, shapeLen, shapeCh, MAX_ARRAYS);
            drawShapes(shapeTy, shapeLen, shapeCh, MAX_ARRAYS);

            break;
        case 6:
            cout << "\n Bye bye!\n";
            done = 1;
            break;

        default:
            cerr << " Wrong choice!";
        }
    }
}

