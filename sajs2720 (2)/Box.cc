
//
// CS 2720 Assignment #1 - Draw- Box.h
/// \file 
/// \author Shah Jabeen Sajid
/// \date Sep 28, 2017
///
/// Draw is the program that let user to draw Lines, Box, TextBox on a  
/// virtual screen.This class is inheriting the ScreenElement class.
/// It includes the Screen Class and Line Class to implement the Box class. 
/// This is Implementation of the Box Class which is the
/// abstraction for a two- dimensional array of characters.

#include <iostream>
#include <iostream>
#include "ScreenElement.h"
#include "Screen.h"
#include "Box.h"
#include "Line.h"


/// Default Constructor
/// It initializes the private data member of the class. 
Box::Box()
{
   row1 = 0;
   col1=0;
   row2=5;
   col2=5;
   symbol=' ';
   
}
/// Copy Constructor
/// \param[in] r1 is the position of the row of the first point of the Box
/// \param[in] c1 is the position of the col of the first point of the Box
/// \param[in] r2 is the position of the row of the second point of the Box
/// \param[in] c2 is the position of the col of the second point of the Box
/// \param[in] sym is the symbol is the character used to create a Line  
Box :: Box(int r1, int c1, int r2, int c2,char sym)
{
   
   row1=r1;
   col1=c1;
   row2=r2;
   col2=c2;
   symbol=sym;
   constructLines();
}
/// Protected Function
/// This function calls the constructor of the Line. 
void Box:: constructLines()
{
   top=Line(row1,col1,row1,col2,symbol);
   bottom= Line (row2,col1,row2,col2,symbol);
   right= Line(row1,col1, row2,col1,symbol);
   left =Line (row1,col2, row2,col2,symbol);
      
}
/// This function uses virtual function from the ScreenElement Class.
/// It draws itself on the screen.  It calls the Line draw function and
/// creates four Lines that represents a Box.
/// \param[in] is Screen object
void Box::draw(Screen& screen)
{
   constructLines();
   top.draw(screen);
   bottom.draw(screen);
   right.draw(screen);
   left.draw(screen);

}
/// This function reads the input stream and initializes the object.
/// \param[in] is the input stream 
void Box:: read(istream&is)
{
   
   is>> row1>> col1>> row2>> col2>> symbol;
   
}

