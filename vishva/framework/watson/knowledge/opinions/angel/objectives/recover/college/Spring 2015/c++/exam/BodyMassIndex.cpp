// Body Mass Index
// Calculates and displays a person’s body mass index (BMI)
// Angel Santiago

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    bool optimal = 0,
         underweight = 0,
         overweight = 0;
    
    int indicate;             
    double weight,
           height,
           BMI;     
           
    do
    {
    cout << "Enter your weight (in pounds): ";
    cin >> weight;
    
    cout << "Enter your height (in inches): ";
    cin >> height;
    
    if ( weight < 5.0 || weight > 500.0 )
       cout << "You entered an invalid weight\n" << endl;
       
    if ( height < 8.0 || height > 96.0 )
       cout << "You entered an invalid height\n" << endl;
    }
    
    while ( (weight < 5 || weight > 500) || (height < 8.0 || height > 96.0) );
           
    BMI = (weight / pow(height, 2)) * 703;
    
    if ( BMI >= 18.5 & BMI <= 25.0)
       cout << "Your weight is optimal"; //indicate = 1;
    else if ( BMI < 18.5)
       cout << "You are underweight"; //indicate = 2;
    else if (BMI > 25.0)
       cout << "You are overweight"; //indicate = 3;
    
   /* switch (indicate)
   {
          case 1: cout << " Your weight is optimal";
          case 2: cout << " You are underweight";
          case 3: cout << " You are overweight";
   }   */

    cout << "\nYour body mass index is " << BMI << " pounds per inch squared" << endl; 
        
    system("pause");
}
