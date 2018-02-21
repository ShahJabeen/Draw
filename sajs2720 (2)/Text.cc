//Text.h
// Programmer: Shah Jabeen Sajid
//
// CS 2720 Assignment #1 - Draw- Text.h
/// \file 
/// \author Shah Jabeen Sajid
/// \date Sep 28, 2017
///
/// Draw is the program that let user to draw Lines, Box, TextBox on a  
/// virtual screen.This class is inheriting the ScreenElement class.
/// It includes the Screen Class, Box Class and Line Class to implement
/// the Text class.This is Implementation of the Text Class which is the
/// abstraction for a two- dimensional array of characters.

#include<iostream>
#include <cassert>
#include <string>
#include "Line.h"
#include "Screen.h"
#include "ScreenElement.h"
#include "Box.h"
#include "Text.h"

/// Copy Constructor
/// \param[in] row is the position from the top of the screen where text is diplayed
/// \param[in] col is the position from the left of the screen where text is diplayed
/// \param[in] sample is the text that needs to be printed.
Text:: Text(int r,int c, string line)
{
row=r;
col=c;
sample=line;
}
/// This function uses virtual function from the ScreenElement Class.
/// It finds the length of the text inputted. it used the set function from the
/// screen class. Which assigns the character to the assigned rows and columns.
/// \param[in] is Screen object
void Text::draw(Screen& screen)
{
int n=sample.length();

for(int i =0; i < n; i++)
{
screen.set(row,col,sample.at(i));
col++;
}
}
/// This function reads the input stream and initializes the object.
/// \param[in] is the input stream 
void Text::read(istream& is)
{

   is>> row>>col>> sample;
}
