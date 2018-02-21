
// CS 2720 Assignment #1 - Draw- TextBox.cc
/// \file 
/// \author Shah Jabeen Sajid
/// \date Sep 28, 2017
///
/// Draw is the program that let user to draw Lines, Box, TextBox on a  
/// virtual screen.This class is inheriting the Text and Box class.
/// It includes the Screen Class to implement the Box class. 
/// This is Implementation of the TextBox Class which is the
/// abstraction for a two- dimensional array of characters.


#include<iostream>
#include <cassert>
#include <string>
#include "Line.h"
#include "Screen.h"
#include "ScreenElement.h"
#include "Box.h"
#include "Text.h"
#include "TextBox.h"

/// Copy Constructor
/// It creates a TextBox. It gives some default values to it .
/// \param[in] row is the position of the Text from the top of the Screen
/// \param[in] col is the position of the Text from the Left of the Screen
/// \param[in] ch is the character used to represent a Box
/// \param[in] sample is the Text that wants to be seen on the Scree
TextBox:: TextBox(int r1,int c1,char c, string line)
{
   row=r1;
   col=c1;
   ch=c;
   sample=line;
   
}
/// This function uses virtual function from the ScreenElement Class.
/// It call the Text and Box constructor and creates it here together.
/// The value of rows and columns are assigned according to the position of
/// the text. 
/// \param[in] is Screen object
void TextBox:: draw(Screen& screen)
{
   int n;
   n=sample.length();
   t1=Text(row,col,sample);
   b1=Box(row-1,col-1,row+1,n+col, ch);
   t1.draw(screen);
   b1.draw(screen);
   
}
/// This function reads the input stream and initializes the object.
/// \param[in] is the input stream 
void TextBox:: read(istream& is)
{
   is>>row>>col>> ch>>sample;
}
