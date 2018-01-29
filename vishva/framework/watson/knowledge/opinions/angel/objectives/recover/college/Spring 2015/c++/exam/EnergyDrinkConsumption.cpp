// Energy Drink Consumption
// Computes and displays the approximate number of customers in the survey who purhcased 
// one or more energy drinks per week and the number of customers in the survery  who prefered citrus flavored energy drinks. 
// Angel Santiago


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int customers = 12467;
    const double purcDrink = .14, 
                 prefCitrus = .64;
    double numDrink,
           numPrefCitrus;
                 
    numDrink = customers * purcDrink;
    numPrefCitrus = numDrink * prefCitrus;
    
    cout << "A total of " << numDrink << " customers purchase energy drinks per week." << endl;

    cout << "Among them, " << numPrefCitrus << " customers prefer citrus flavored energy drinks." << endl;  
         
    system("pause");
}
