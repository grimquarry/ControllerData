This cli-based interactive program will identify all usb controllers/joysticks currently connected to a computer and list them
so the user can choose what controller they want to get button mappings for.  This can be considered an extension of the
SFML Library and will run on Debian based Operating Systems.  As an extension of SFML, it depends on a dynamically linked
SFML Library.  It also must be compiled with C++17, which is accounted for in the Makefile.  It was built with a number
of stand-alone classes and datatypes, which are all included in the repository.  Here is a list of those dependencies
and where they can be found:
SFML Libraries installed and dynamically linked: https://www.sfml-dev.org/
DexToHex Class: https://github.com/grimquarry/DecToHexConverter
SfmlCtrl Datatype: https://github.com/grimquarry/SfmlCtrl 
SfmlCtrlData Class: https://github.com/grimquarry/SfmlCtrlData 
UsbIdData Class: https://github.com/grimquarry/UsbIdData
This repo conatian all dependencies except for the SFML LIbrary and can be cloned and compiled using the "make" command.
To run the program you type ./run into the terminal after the program has been compiled.  

