/** \file Shapes.h
*   \brief Header file for a small drawing library
*   \details library which can draw different shapes like...
*   \author Dmytro Venchak
*   \version 0.1
*   \date 29/03/2021
*/

#ifndef SHAPES_H
#define SHAPES_H

//prototypes
void drawHorizontalLine(const int length, const char ch);
void drawVerticalLine(const int height, const char ch);
void drawSquare(const int size, const char ch);
void drawRectangle(const int length, const int height, const char ch);
void initializeShapes(int shapeTy[], int shapeLen[], char shapeCh[], const int size);
void drawShapes(int const shapeTy[], int const shapeLen[], char const shapeCh[], const int size);


#endif // !SHAPES_H