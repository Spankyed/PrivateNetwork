// findErrors.cpp
// This program has one syntax error and one logic error. Find and fix them.
// Angel Santiago 
#include <iostream>            
using namespace std;

int main ()
{
	double length = 0,         // Length of a room in feet
          width = 0,          // Width of a room in feet
          area;               // Area of the room in sq. ft.
         
   // Get the room dimensions
   cout << "Enter room length (in feet): ";
   cin  >> length;
   
   cout << "Enter room width (in feet): ";
   cin  >> width;
   
   // Compute and display the area
   area = length * width;
   cout << "The area of the room is " << area << " square feet." << endl;
   system ("pause"); 
   return 0;
}
