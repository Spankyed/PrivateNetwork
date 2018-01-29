/* Ocean Levels Problem 
   Displays a table showing the total number of millimeters 
   the ocean will have risen each year for the next 25 years */
// Angel Santiago                        
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    const double RISE_PER_YEAR = 3.1;
    
    double totalRise = 0.0;
    
    cout << "          Cumulative\n"
         << "  Year    Ocean Rise\n"
         << "-----------------------\n";
         
    cout << fixed << setprecision (1);
    
    for (int year = 1; year <= 25; year++)
    {   totalRise += RISE_PER_YEAR;
        cout << setw(6) << year
             << setw(10) << totalRise << " mm\n";
    }
    
    system("pause");
    
   return 0;
}
