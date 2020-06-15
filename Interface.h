/**
    ControllerData
    Interface.h
    Purpose: Header file for the Interface class used to drive the ControllerData program.  It allows
        users to map button indexes to the label of their choice and outputs information necessary for
        game development using the SFML Library.
    @author Jeremiah Kellogg
    @version 1.0.0 2020-06-14
*/
#pragma once
#include <iostream>
#include "SfmlCtrlData.h"

class Interface
{
public:
  Interface();
  ~Interface();

  /**
  Encapulates the program loop.
  */
  void Display();

private:
  int selection;  //Variable for storing the controller index number the user selects for getting data
  bool menu; //For the program loop
  SfmlCtrlData sfmlCtrlData; //Object for grabbing and setting data related to controller/joysticks that can interact with the SFML Library

};
