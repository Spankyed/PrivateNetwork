// Hotel Suites Occupancy
// Gets from user and displays the number of suites that are occupied on floors 10-16 and displays the percentage of total suites occupied /120.
// Angel Santiago

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int j,
        occ,
        occupants = 0,
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
                    
    for (j = 0; j <= n; j++)
    {    
         do
         {    if (j == 4)
                 exit(0);
              else
              cout << "How many suites are occupied on the " 
                   << floor[j] << "th floor" << endl;
              cin >> occ;
               
              if (occ > 0 & occ < 20)
                floor[j] = occ;
         }
         while ( occ < 0 || occ > 20 );
    }
    
    for (j = 0; j <= n; j++)
    {   occupants = floor[j] + occupants; 
    }
    
    percOcc = occupants / 120;
    
    cout << " Of the 120 suites on floors 10-16 " 
         << percOcc * 100 
         << "% are occupied, " << occupants << "/120 suites" << endl;

    system("pause");
    return 0;
}
