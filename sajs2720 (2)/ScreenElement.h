// 
// CS 2720 Assignment #1 - Draw- ScreenElement.h
/// \file 
/// \author Shah Jabeen Sajid
/// \date Sep 28, 2017
///
/// Draw is the program that let user to draw Lines, Box, TextBox on a  
/// virtual screen.This class is inheriting the Text and Box class.
/// It includes the Screen Class to implement the Box class. 
/// This is Interface of the ScreenElement Class which is the
/// abstraction for a two- dimensional array of characters.

#ifndef SCREENELEMENT_H
#define SCREENELEMENT_H

#include <iostream>
#include "Screen.h"

using namespace std;

class ScreenElement
{
  
  public:
   /// Default Constructor
   ScreenElement(){};

   /// function that draws its on the screen
   /// \param[in] is Screen object 
   virtual void draw(Screen & screen)= 0;
   
   ///reads input stream,and initialize the object(no output)
   /// \param[in] is the input stream 
   virtual void read(istream&S)=0;
   
   /// Destructors
   virtual ~ScreenElement(){}; // destructor

};


#endif
