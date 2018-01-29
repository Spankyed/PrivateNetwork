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
    const double percDrink = .14, 
                 prefCitrus = .64;
                 
    double numDrink,
           numPrefer;
           
    numDrink = customers * percDrink;
    numPrefer = numDrink * prefCitrus;
                 
           
           

    cout << "Number of customers in the survey who purchase"
         << "one or more energy drinks per week: " 
         << numDrink << endl;
    cout << "Number of customers in the survey who prefer"
         << "citrus flavored energy drinks: " 
         << numPrefer << endl;     
         
    system("pause");
     
    
}
