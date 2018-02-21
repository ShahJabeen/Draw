
// CS 2720 Assignment #1 - Draw- TextBox.h
/// \file 
/// \author Shah Jabeen Sajid
/// \date Sep 28, 2017
///
/// Draw is the program that let user to draw Lines, Box, TextBox on a  
/// virtual screen.This class is inheriting the Text and Box class.
/// It includes the Screen Class to implement the Box class. 
/// This is Interface of the TextBox Class which is the
/// abstraction for a two- dimensional array of characters.

#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <iostream>
#include <string>
#include "ScreenElement.h"
#include "Screen.h"
#include "Line.h"
#include "Box.h"
#include "Text.h"

using namespace std;

/// It is designed to create a TextBox with the help of Text Class and
/// Box Class. It creates a box around the text provided by the user.
/// it take in row and column and later put the text on that position.

class TextBox: public Text, public Box
{
  private:
   /// The position from the top
   int row;
   /// The position from the left
   int col;
   /// The character needed to be used to create a box around the text.
   char ch;
   /// The text input needed to be seen on the Screen.
   string sample;
   /// Text Object used to create a Text on Screen
   Text t1;
   /// Box Object used to create a Box around the text on the Screen.
   Box b1;
 
  public:
   /// Copy Constructor
   /// \param[in] row is the position of the Text from the top of the Screen
   /// \param[in] col is the position of the Text from the Left of the Screen
   /// \param[in] ch is the character used to represent a Box
   /// \param[in] sample is the Text that wants to be seen on the Screen
   TextBox(int row=0,int col=0,char ch=' ', string sample=" ");
   /// \param[in] is Screen object 
   void draw(Screen&);
   /// \param[in] is the input stream 
   void read(istream&);

};

#endif
