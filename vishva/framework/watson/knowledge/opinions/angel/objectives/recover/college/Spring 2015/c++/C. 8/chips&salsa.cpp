// Hotel Suites Occupancy
// Gets from user and displays the number of suites that are occupied on floors 10-16 and displays the percentage of total suites occupied /120.
// Angel Santiago

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;


double findLowest(double arg[]);
double findHighest(double arg[]);

int main()
{
    int parallel = 4;
    string salsaType[parallel] = {"mild", "medium", "sweet", "hot", "zesty"};
    double amtSold[parallel];
    
    for (int i = 0; i < 4; i++)
    {   cout << "How many " << salsaType[i] << " salsas were sold?";
        cin >>amtSold[i]; 
    }
    
    findLowest(amtSold);
    findHighest(amtSold);
    
    cout << "  Salsa   Amount Sold\n"
         << "-----------------------\n";
         
    cout << fixed << setprecision (1);
    
    for (int j = 0; j < 4; j++)
    {   cout << setw(6) << salsaType[j] << setw(10) << amtSold[j] << " \n";
    }
    
    system("pause");
}
    
    
double findLowest(double arg[])
{   int lowest = arg[0];
    for (int i = 1; i < 4; i++)
    {   if (arg[i] < lowest)
        lowest = arg[i];    
    }
    return lowest;
}

double findHighest(double arg[])
{   int highest = arg[0];
    for (int i = 1; i < 4; i++)
    {   if (arg[i] > highest)
        lowest = arg[i];    
    }
    return highest;
}
