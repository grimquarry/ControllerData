/**
    ControllerData
    Interface.cpp
    Purpose: Definitions for the Interface class used to drive the ControllerData program.  It allows
        users to map button indexes to the label of their choice and outputs information necessary for
        game development using the SFML Library.
    @author Jeremiah Kellogg
    @version 1.0.0 2020-06-14
*/
#include "Interface.h"

Interface::Interface()
{
  menu = true;
}

Interface::~Interface() { }

//Encapulates the program loop.
void Interface::Display()
{
  while(menu)
  {
    if(sfmlCtrlData.getControllers())
    {
      std::cout << "The following controllers were found: " << std::endl;
      for(int i = 0; i < sfmlCtrlData.controllers.size(); ++i)
      {
        std::cout << "\t Index: " << sfmlCtrlData.controllers[i].index << std::endl;
        std::cout << "\t\tController Vendor: " << sfmlCtrlData.controllers[i].vendorName << std::endl;
        std::cout << "\t\tController Name: " << sfmlCtrlData.controllers[i].name << std::endl;
      }

      std::cout << "Please select index from the list above: ";

      std::cin >> selection;

      if (std::cin.fail())
      {
        std::cout << "That was an invalid seclection, try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore();
        sfmlCtrlData.controllers.clear();
        continue;
      }
      else if(selection >= 0 && selection <= sfmlCtrlData.controllers.size() - 1)
      {
        std::cout << selection << std::endl;
        sfmlCtrlData.getButtonIndicies(selection);
        menu = false;
      }
      else
      {
        std::cout << selection << " isn't a valid index, try again." << std::endl;
        sfmlCtrlData.controllers.clear();
        std::cin.clear();
        std::cin.ignore();
        continue;
      }
    }
    else
    {
      char input = ' ';
      std::cout << "No Controllers were found.  Check to make sure one or more controllers are plugged in." << std::endl;
      std::cout << "Once a controller has been attached press the c key to continue or q to quit: ";
      std::cin >> input;
      std::cout << input << std::endl;

      if(input == 'c' || input == 'C')
      {
        sf::Joystick::update();
        continue;
      }
      else if(input == 'q' || input == 'Q')
      {
        menu = false;
      }
      else
      {
        input = ' ';
        std::cout << "Invalid input" << std::endl;
      }
    }
  }
}
