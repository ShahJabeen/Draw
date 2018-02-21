
//
// CS 2720 Assignment #1 - Draw- Screen.cc
/// \file 
/// \author Shah Jabeen Sajid
/// \date Sep 28, 2017
///
/// Draw is the program that let user to draw Lines, Box, TextBox on a  
/// virtual screen. This is Implementation of the  Screen Class which is the
/// abstraction for a two- dimensional array of characters.

#include<iostream>
#include "Screen.h"


using namespace std;

/// Default constructor
/// This function does not take any inputs from the user and assign the height
/// and width as kept as defaults. Creates a screen of default height and
/// width.
Screen::Screen()
{
   height=24;
   width=80;
   
   arr=new char*[height];
   for(int i=0; i<height; i++)
      arr[i]=new char[width];

   for(int i =0; i<height; i++)
      for (int j=0; j<width; j++)
	 arr[i][j]=' ';
  
}
/// Copy Constructor
/// This function takes the height and width from the user and set creates
/// a screen of that size by the user. 
/// \param[in] h is the height of the screen provided by the user
/// \param[in] w is the width of the screen provided by the user
/// \return os it outputs the screen.
Screen::Screen(const int&h,const int&w)
{
   height=h;
   width=w;
   
   arr=new char*[height];
   for(int i=0; i<height; i++)
      arr[i]=new char[width];

   
   for(int i =0; i<height; i++)
      for (int j=0; j<width; j++)
	 arr[i][j]=' ';
   
}
/// Destructor
/// This function delete the entire Screen and remove it from the memory.
/// So that after the program ends running it deletes all the space
/// utilized by this function.
Screen::~Screen()
{
   for (int i=0; i<height; i++)
   {
      delete[] arr[i];
   }
   delete[]arr;
   
}
/// A function that read the private data(height) and return the height. 
/// \returns the size of row
int Screen::getRows()
{
   return height;
}
/// A function that read the private data(width) and return the width.
/// \returns the size of column
int Screen::getColumns()
{
   return width;
}

/// This function clears the entire screen as set it as default screen.
void Screen::clear()
{
   for(int i=0;i<height;i++)
      for(int j =0; j<width;j++)
	 arr[i][j]=' ';
}
/// This function sets a given character to a specific position as
/// assigned by the user.
/// \param[in] r the rows needed to be set for a certain function
/// \param[in] c the columns needed to be set for a certain function
/// \param[in] charac the character needed to be use for a given row and column
void Screen::set(int r, int c, char charac)
{
   arr[r][c]=charac;
}

/// This function prints the Screen according to all the changes that
/// has been preformed by the user. 
/// \param[out] os the output stream
/// \param[in] print is the screen element that needed to be printed. 
ostream& operator << (ostream&os, const Screen& print)
{
   
   for (int i=0; i<print.height ;i++)
   {
      for (int j=0; j<print.width; j++)
	 os<< print.arr[i][j];
      os<< endl;
   }
   return os;
}


