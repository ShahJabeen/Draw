
//
// CS 2720 Assignment #1 - Draw- Screen.h
/// \file 
/// \author Shah Jabeen Sajid
/// \date Sep 28, 2017
///
/// Draw is the program that let user to draw Lines, Box, TextBox on a  
/// virtual screen. This is Interface of the  Screen Class which is the
/// abstraction for a two- dimensional array of characters.


#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>

using namespace std;

/// It was designed in a way that user can set up their screen manually
/// or they can use the default parameters to creat an abstract screen.
/// It will give segmentation fault if the input is too huge.

/// This class can return the rows and columns used recently. 
/// It can clear the everything that is done by the user. 
/// The main function in this class is the ostream. That outputs the screen.


class Screen
{
  private:
   /// The array storing all of the characters in rows and columns
   char **arr;
   /// The height of the virtual screen
   int height;
   /// The widht of the virtual screen
   int width;
   /// The character used to represent the entire array.
   char ch;
   
  public:
   /// Default constructor
   Screen();
   
   /// Copy Constructor
   /// \param[in] h is the height of the screen provided by the user
   /// \param[in] w is the width of the screen provided by the user
   /// \return os it outputs the screen.
   Screen(const int& h ,const int& w);
   
   /// Destructor
   ~Screen();

   /// \return the size of row
   int getRows();

   /// \return the size of column
   int getColumns();

   /// This function clears the entire screen as set it as default screen
   void clear();

   /// \param[in] r the rows needed to be set for a certain function
   /// \param[in] c the columns needed to be set for a certain function
   /// \param[in] charac the character needed to be use for a given row and column
   void set(int r, int c, char charac);

   /// \param[out] os the output stream
   /// \param[in] print is the screen element that needed to be printed. 
   friend ostream& operator << (ostream& os, const Screen& print);


};

#endif

