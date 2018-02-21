
// CS 2720 Assignment #1 - Draw
/// \file 
/// \author Shah Jabeen Sajid
/// \date Sep 28, 2017
///
/// Draw is the program that let user to draw Lines, Box, TextBox on a  
/// virtual screen.This class is inheriting the ScreenElement class.
/// It includes the Screen class to implement the Line class. 
/// This is Implementation of the Line Class which is the
/// abstraction for a two- dimensional array of characters.

#include <iostream>
#include <vector>
#include <string>
#include "Screen.h"
#include "ScreenElement.h"
#include "Line.h"
#include "Box.h"
#include "Text.h"
#include "TextBox.h"


using namespace std;

int main()
{
   vector<ScreenElement*>::iterator it;
   vector<ScreenElement*> cursor;
   Screen *A=NULL;
   char choice;
  
   
   do {
      cin>>choice;
      switch (choice)
      {
     ///This case creates new Screen object and remove all ScreenElement
      case 'N':
      { 
	 A=new Screen;
	  
	 for (it= cursor.begin(); it!=cursor.end();++it)
	 {
	    delete *it;
	   
	 }
	 A->clear();
	      
	 break;
      }
      /// This case creates new Box object and read from the standard input;
      case 'B': 
      {
	 Box *bptr= new Box;
	 bptr->read(cin);
	 cursor.push_back(bptr);
	 bptr->draw(*A);
	      
	 break;
      }
      /// This case creates new Text object n read from its standard input
      case 'T': 
      {
	 Text *tptr= new Text;
	 tptr->read(cin);
	 cursor.push_back(tptr);
	 tptr->draw(*A);
	
	 break;
      }
      /// This case creates a new TextBox object and read from its standard input
      case 'R':
      {
	 TextBox *tbptr= new TextBox;
	 tbptr->read(cin);
	 cursor.push_back(tbptr);
	 tbptr->draw(*A);
	      
	 break;
      }
      /// This case display content of the Screen Object to Standard Output
	 case 'D':
	 {
	 cout <<*A;
      
	 break;
	 }
      /// The case remove the most recent added ScreenElement and redraw Screen
      case 'K':
      {
          if(cursor.empty()==false)
	  {
	     cursor.pop_back();
	     A->clear();
	    for (it= cursor.begin(); it!=cursor.end(); it++)
	       (*it)->draw(*A);
	    
     	 }
	 break;
      }
      /// This case Quit the program
	 case 'Q': return 0;
      default: cout << "Wrong input, try again" << endl;

      }
   
  }
  while(choice!='Q');
  return 0;

}
      
