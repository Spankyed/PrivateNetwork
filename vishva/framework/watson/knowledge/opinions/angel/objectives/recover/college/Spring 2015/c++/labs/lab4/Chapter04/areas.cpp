// Lab 4 areas.cpp 
// Finds and displays areas of 3 different objects. 
// Angel Santiago

#include <iostream>
#include <string>
using namespace std;

int main()
{  
   const double   pi = 3.14159;
          
   int square = 1, circle = 2,
       rightTri = 3, exit = 4,
       choice;
   double sqSide, xComp, yComp, radius;
   
   cout << "What shape would you like to calculate the area for?\n";
   cout << "Enter 1 for a square\n";
   cout << "Enter 2 for a circle\n";
   cout << "Enter 3 for a right triangle\n";
   cout << "Enter 4 to exit\n";
   
   cin  >> choice;
 
   if (choice == square)
   {
      cout <<  "What is the length of one side? " << endl;
      cin >> sqSide;
      cout << "Area = " << sqSide * sqSide << endl;
      }    
   else if (choice == circle)
   {
        cout <<  "What is the radius of the circle? " << endl;
        cin >> radius;
        cout << "Area = " << pi * (radius * radius) << endl;
        }  
   else if (choice == rightTri)
   {
        cout <<  "What are the X and Y components of the right triangle (seperated by a space)? " << endl;
        cin >> xComp >> yComp;
        cout << "Area = " << (yComp * xComp) / 2 << endl;
        }
   else if (choice == exit)
        cout << "You have chosen to exit the program.\n";
   else 
       cout << "Invalid Choice\n";
      
   system("pause");   
   return 0;
}
