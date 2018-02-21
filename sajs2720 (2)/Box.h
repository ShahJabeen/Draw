
//
// CS 2720 Assignment #1 - Draw- Box.h
/// \file 
/// \author Shah Jabeen Sajid
/// \date Sep 28, 2017
///
/// Draw is the program that let user to draw Lines, Box, TextBox on a  
/// virtual screen.This class is inheriting the ScreenElement class.
/// It includes the Screen Class and Line Class to implement the Box class. 
/// This is Interface of the Box Class which is the
/// abstraction for a two- dimensional array of characters.

#ifndef BOX_H
#define BOX_H

#include <iostream>
#include "ScreenElement.h"
#include "Screen.h"
#include "Line.h"

using namespace std;

/// It was designed to create a Box represented by four lines.
/// It uses the Line Class to create a Box,by sending the Line class
/// the four points as per requirement. Which returns four Lines thereby
/// creating a Box.

class Box: virtual  public ScreenElement
{
  private:
   /// Line Object representing the top most line
   Line top;
   
   /// Line Object representing the Bottom most line
   Line bottom;
   
   /// Line Object representing the Left most line
   Line left;
   
   /// Line Object representing the right most line
   Line right;
   
   /// The rows and columns of the two points of the bottom.
   /// Point1(row1, col1) and Pint2 (row2, col2) 
   int row1, col1, row2,col2;
   
   /// Line Object representing the top most line
   char symbol;

  protected:
   /// Protected Function
   /// This function calls the constructor of the Line. 
   void constructLines();
   
  public:
   /// Default Constructor
   Box();
   
   /// Copy Constructor
   /// \param[in] r1 is the position of the row of the first point of the Box
   /// \param[in] c1 is the position of the col of the first point of the Box
   /// \param[in] r2 is the position of the row of the second point of the Box
   /// \param[in] c2 is the position of the col of the second point of the Box
   /// \param[in] sym is the symbol is the character used to create a Line
   Box(int r1, int c1, int r2, int c2,char sym);
   
   /// \param[in] is Screen object 
   void draw(Screen& screen);
   
   /// \param[in] is the input stream 
   void read(istream& is);

   

};


#endif
