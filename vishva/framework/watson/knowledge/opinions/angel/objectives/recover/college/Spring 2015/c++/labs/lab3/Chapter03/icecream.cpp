// Lab 3 icecream.cpp 
// Process and report daily cone sales
// Angel Santiago

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{  
    
    
   // DEFINE NAMED CONSTANTS HERE TO HOLD THE PRICES OF THE 3 
   // SIZES OF ICE CREAM CONES. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE. 
   
   const double oneScoop = 1.49, 
                doubleScoop = 2.49, 
                tripleScoop = 3.49;
   
   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE. 
   
   int oneScoopSold , doubleScoopSold, tripleScoopSold , totSold;
   
   double oneScoopSales , doubleScoopSales , tripleScoopSales , totSales;
   
    
   
   // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
   // THE PROGRAM NEEDS TO GET FROM THE USER.
   
   cout << "How many DeLIGHTfuls were sold? : ";
   cin >> oneScoopSold;
   
   cout << " \nHow many Double DeLIGHTs were sold? : ";
   cin >> doubleScoopSold;
   
   cout << " \nHow many Triple DeLIGHTs were sold? : ";
   cin >> tripleScoopSold;
   
   
   // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS  
   // AND ASSIGN THE RESULTS TO VARIABLES.
   
   oneScoopSales = oneScoopSold * oneScoop;
   
   doubleScoopSales = doubleScoopSold * doubleScoop;
   
   tripleScoopSales = tripleScoopSold * tripleScoop;
   
   totSales = oneScoopSales + doubleScoopSales + tripleScoopSales;
   
   totSold = oneScoopSold + doubleScoopSold + tripleScoopSold;
   
   // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
   
     cout << "\n                Sales Report                \n";
     cout << "==================================================\n\n";
     cout << "Item                Amount                Item\n";
     cout << "Type                Sold                  Sales\n\n";
     
     cout << "DeLIGHTful" << "           " << oneScoopSold 
     << "                " << setprecision(2) << fixed << oneScoopSales << endl;
     
     cout << "Double DeLIGHT" << "       " << doubleScoopSold 
     << "                " << setprecision(2) << fixed << doubleScoopSales << endl;
     
     cout << "Triple DeLIGHT" << "       " << tripleScoopSold 
     << "                " << setprecision(2) << fixed << tripleScoopSales << endl;
     
     cout << "Total" << "                " << totSold 
     << "                " << setprecision(2) << fixed << totSales << endl; //unable to correct bug on this line
  
  
  system("pause");

   return 0;
}
