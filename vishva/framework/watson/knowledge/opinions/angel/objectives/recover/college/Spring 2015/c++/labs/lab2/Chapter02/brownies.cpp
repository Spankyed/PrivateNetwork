// brownies.cpp 
// Determines how many brownies will fit in a baking pan of a specified size
// Angel Santiago.

#include <iostream>
using namespace std;

int main()
{   
   	double length ,        // Length of the baking pan(in inches).
          width ,          // Width of the baking pan(in inches).
          smallBrownies,   // Amount of brownies pan will hold if each one is cut with a 1”x1” square bottom. 
          bigBrownies,     // Amount of brownies pan will hold if each one is cut with a 2”x2” square bottom.
          area;            // Area of the baking pan (in sq. in).
   
   // Get dimensions of baking pan.
   cout << "Enter the length of the baking pan (in inches): ";
   cin  >> length;
   
   cout << "Enter the width of the baking pan (in inches): ";
   cin  >> width;
   
   // Compute area and portioning.
   area = length * width;
   smallBrownies = area;
   bigBrownies = area / 4.0;
   
   // Display dimensisons and portionings
   cout << "A " << length << " x " << width << " inch pan can hold " 
   << smallBrownies << " small brownies or " << bigBrownies << " big brownies." << endl;
   
   system ("pause"); 
      
   return 0;
}
