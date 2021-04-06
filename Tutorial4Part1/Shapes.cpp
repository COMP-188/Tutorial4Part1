/** \file Shapes.cpp
*   \brief Implimintation file for a small drawing library
*   \details Program which can draw different shapes like...
*   \author Dmytro Venchak
*   \version 0.1
*   \date 29/03/2021
*/


#include "Shapes.h"
#include <iostream>
#include <cassert>
#include <cstdlib>
#include <ctime>

using namespace std;


/**
* Function <code>drawHorizontalLine</code> draws a vertical line with users paramiters entered
* <BR>
* @param <code>length</code> represents the length of a line drawn
* @param <code>ch</code> reperesents a character with what the line is drawn
* @return Returns <code>0</code>
*/
void drawHorizontalLine(const int length, const char ch) {
    int i = 1;
    while (i <= length) {
        cout << ch;
        i++;
    }
}
/**
* Function <code>drawVerticalLine</code> draws a vertical line with users paramiters entered
* <BR>
* @param <code>height</code> represents the length of a line drawn
* @param <code>ch</code> reperesents a character with what the line is drawn
* @return Returns <code>0</code>
*/
void drawVerticalLine(const int height, const char ch) {
    int i = 1;
    while (i <= height) {
        cout << ch << endl;
        i++;
    }
}
/**
* Function <code>drawSquare</code> draws a square with users paramiters entered
* <BR>
* @param <code>size</code> represents how big the square will be (n*n)
* @param <code>ch</code> reperesents a character with what the square is drawn
* @return Returns <code>0</code>
*/
void drawSquare(const int size, const char ch) {
    int i, j;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            if (i == 1 || i == size ||
                j == 1 || j == size)
                cout << ch;
            else
                cout << " ";
        }
        cout << endl;
    }
}
/**
* Function <code>drawRectangle</code> draws a square with users paramiters entered
* <BR>
* @param <code>length</code> represents the lenght of a rectangle
* @param <code>height</code> represents the height of a rectangle
* @param <code>ch</code> reperesents a character with what the square is drawn
* @return Returns <code>0</code>
*/
void drawRectangle(const int length, const int height, const char ch) {
    int i, j;
    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= length; j++)
        {
            if (i == 1 || i == height ||
                j == 1 || j == length)
                cout << ch;
            else
                cout << " ";
        }
        cout << endl;
    }
}
/**
* Function <code>initializeShapes</code> sets the values of arrays which represent
* a set of shapes. The values are randonly generated
* <BR>
* @param shapeTy Contains the value in range 1 - 4 which represent the type
* @param shapeLen Contains the values  range 1 - 20 (length of shape)
* @param shapeCh Contains the symbol too be used to draw shape, ranges 33 - 126
* @param <code>size</code> represents the size of the aarrays (constant)
* @return Returns <code>0</code>
*/
void initializeShapes(int shapeTy[], int shapeLen[], char shapeCh[], const int size) {

    for (int i = 0; i < size; i++) {
        shapeTy[i] = rand() % 4 + 1;
        shapeLen[i] = rand() % 20 + 1;
        shapeCh[i] = rand() % 94 + 33;
    }
}
/**
* Function <code>drawShapes</code> draws a shape depending on users choice. all the <code>if</code> statements
* are pointing to other functions.
* <BR>
* @param <code>shapeTy</code> represents a type of a shape the user wants to draw
* @param <code>shapeLen</code> represents what it the length of a shape drawn
* @param <code>shapeCh</code> represents a symbol with which the function will be drawn
* @param <code>size</code> represents the size of the aarrays (constant)
* @return Returns <code>0</code>
*/
void drawShapes(int const shapeTy[], int const shapeLen[], char const shapeCh[], const int size) {
    assert(size > 0);

    int i;
    for (i = 0; i < size; i++) {
        if (shapeTy[i] == 1) {
            drawHorizontalLine(shapeLen[i], shapeCh[i]);
        }
        else if (shapeTy[i] == 2) {
            drawVerticalLine(shapeLen[i], shapeCh[i]);
        }
        else if (shapeTy[i] == 3) {
            drawSquare(shapeLen[i], shapeCh[i]);
        }
        else if (shapeTy[i] == 4) {
            drawRectangle(shapeLen[i], shapeLen[i] * 2, shapeCh[i]);
        }
        else {
            assert(false);
        }
    }
    assert(i == size);
}
