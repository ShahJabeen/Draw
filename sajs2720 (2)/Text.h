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
/// the Text class.This is Interface of the Text Class which is the
/// abstraction for a two- dimensional array of characters.


#ifndef TEXT_H
#define TEXT_H

#include <iostream>
#include<string>
#include "ScreenElement.h"
#include "Screen.h"
#include "Line.h"
#include "Box.h"


using namespace std;
/// It was designed to create a Text Class. It uses virtual inheritance
/// with the ScreenElement Class. It takes in three parameters to display
/// a given text on the screen. 

class Text: virtual public ScreenElement
{
  private:
   /// the row of the position where text needs to be seen
   int row;
   /// The column of the position where text needs to be seen
   int col;
   /// The text that needs to be seen on the screen. 
   string sample;
 
  public:
   /// Copy Constructor
   /// \param[in] row is the position from the top of the screen where text is diplayed
   /// \param[in] col is the position from the left of the screen where text is diplayed
   /// \param[in] sample is the text that needs to be printed.
   Text(int row=0,int col=0, string sample=" ");
   /// \param[in] is Screen object 
   void draw(Screen&);
   /// \param[in] is the input stream
   void read(istream&);

};

#endif
