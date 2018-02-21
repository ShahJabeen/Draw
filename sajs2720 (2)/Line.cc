
//
// CS 2720 Assignment #1 - Draw- Line.cc
/// \file 
/// \author Shah Jabeen Sajid
/// \date Sep 28, 2017
///
/// Draw is the program that let user to draw Lines, Box, TextBox on a  
/// virtual screen.This class is inheriting the ScreenElement class.
/// It includes the Screen class to implement the Line class. 
/// This is Implementation of the Line Class which is the
/// abstraction for a two- dimensional array of characters.

#include<iostream>
#include <cassert>
#include "Line.h"
#include "Screen.h"
#include "ScreenElement.h"

/// Copy Constructor
/// This function creates a Line. It even sets some default values. So it
/// can be used as default constructor also. 
/// \param[in] row1 is the position of the row of the first point on Line
/// \param[in] col1 is the position of the col  of the first point on Line
/// \param[in] row2 is the position of the row of the second point on Line
/// \param[in] col2 is the position of the col of the second point on Line
/// \param[in] symbol is the character used to create a Line
Line::Line(int r1, int c1, int r2, int c2, char ch)
{
   row1= r1;
   col1= c1;
   row2= r2;
   col2= c2;
   symbol = ch;
   
}
/// This function uses virtual function from the ScreenElement Class.
/// It draws itself on the screen. It checks condition before going inside
/// draw function. It checks either the row or column are equal to in the
/// two points given. This verfifies that the line is either vertical or
/// horizontal. 
/// \param[in] is Screen object
void Line::draw(Screen& screen)
{
   assert(row1==row2 || col1== col2);
   
     	 if (col1<col2)
	 {
	    for (int i= col1; i<=col2 ; i++)
	       screen.set(row1,i,symbol);
	 }
	 else if(col1>col2)
	 {
	    for (int i= col2; i<=col1 ; i++)
	       screen.set(row1,i,symbol);
	 }
	 
	 else if(row1<row2)
	    {
	       for (int i= row1; i<=row2 ; i++)
		  screen.set(i,col1,symbol);
	    }
	  else
	    {
	       for (int i= row2; i<=row1; i++)
		  screen.set(i,col1,symbol);
	    }

}
/// This function reads the input stream and initializes the object.
/// It also checks if either row or col are equal in both the point.
/// So that it only creates a horizontal or vertical line. 
/// \param[in] is the input stream 
void Line:: read(istream& is)
{
   assert(row1==row2 || col1== col2);

   is >>row1>>col1>>row2>>col2>>symbol;

}
