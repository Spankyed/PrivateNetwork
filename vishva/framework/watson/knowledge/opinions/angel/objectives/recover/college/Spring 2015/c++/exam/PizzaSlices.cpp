// Pizza Slices
// Computes and displays the numeber of slices any sized pizza can be cut into mainting an area of 14.125 per slice
// Angel Santiago

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double areaSlice = 14.125,
                 pi = 3.14; 
    
                 
    double diameter,
           areaPizza,
           numSlices;       
           

    cout << "What is the diameter of the pizza(in inches)?: ";
    cin >> diameter; 
    
    areaPizza = pi * pow(diameter / 2, 2);
    
    numSlices = areaPizza / areaSlice ;    
    
         
    cout << "\nYour pizza can be cut into " << numSlices
         << " slices, each mainting an area of fourteen and an eighth square in.\n" 
         << endl;    
         
    system("pause");
}
