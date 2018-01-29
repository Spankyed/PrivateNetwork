// Energy Drink Consumption
// Computes and displays the approximate number of customers in the survey who purhcased 
// one or more energy drinks per week and the number of customers in the survery  who prefered citrus flavored energy drinks. 
// Angel Santiago

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int occupants = 0,
              n = 6,
              floor[n];
              
    double percOcc;    

    for (int i = 0; i <= n; i++)
    {   floor[i] = i + 10;
        if (floor[i] == 13)
        {  floor[i] = 14;
           i++;
        }
    }
                    
    for (int j = 0; j <= n; j++)
    {    
         do
         {    if (j == 4)
                 exit(0);
              else
              cout << "How many suites are occupied on the " 
                   << floor[j] << "th floor" << endl;
              cin >> floor[j];
         }
         while ( floor[j] < 0 || floor[j] > 20 );
    }
    
    for (int i = 0; i <= n; i++)
    
    {   occupants = floor[i] + occupants; 
    }
    
    percOcc = occupants / 120;
    
    cout << " Of the 120 suites on floors 10-16 " 
         << percOcc * 100 
         << "% are occupied, " << occupants << "/120 suites" << endl;

    system("pause");
    return 0;
}
