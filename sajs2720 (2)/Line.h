
//
// CS 2720 Assignment #1 - Draw- Line.h
/// \file 
/// \author Shah Jabeen Sajid
/// \date Sep 28, 2017
///
/// Draw is the program that let user to draw Lines, Box, TextBox on a  
/// virtual screen.This class is inheriting the ScreenElement class.
/// It includes the Screen class to implement the Line class. 
/// This is Interface of the  Line Class which is the
/// abstraction for a two- dimensional array of characters.

#ifndef LINE_H
#define LINE_H

#include <iostream>
#include "ScreenElement.h"
#include "Screen.h"

using namespace std;

/// It was designed in a way that it creates a Line on a Screen . By setting
/// up two points and outputs few number of characters.
/// It uses a condition for creating a Line. It is that either row and columns
/// are same so that it either creates a horizontal or vertical line.

/// The main function is read() and draw() which is the virtual function
/// from the ScreenELement Class.

class Line: public ScreenElement
{
  private:
   /// The row of the first point on the Line that needs to be drawn
   int row1;
   /// The column of the first point on the Line that needs to be drawn
   int col1;
   /// The row of the second point on the Line that needs to be drawn
   int row2;
   /// The column of the second point on the Line that needs to be drawn
   int col2;
   /// The symbol that is used to represent the Line. 
   char symbol;
   

  public:
   /// Copy Constructor
   /// This function creates a Line. It even sets some default values. So it
   /// can be used as default constructor also. 
   /// \param[in] row1 is the position of the row of the first point on Line
   /// \param[in] col1 is the position of the col  of the first point on Line
   /// \param[in] row2 is the position of the row of the second point on Line
   /// \param[in] col2 is the position of the col of the second point on Line
   /// \param[in] symbol is the character used to create a Line
   Line(int row1=0, int col1=0, int row2=0, int col2=0,char symbol= '*');

   /// \param[in] is Screen object 
   void draw(Screen& is);
   
   /// \param[in] is the input stream 
   void read(istream& is);

};


#endif
