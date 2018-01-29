// Chapter 3 Programming Challenge 2, Stadium Seating
// Angel Santiago

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{  
   
   const double Class_A_Price = 15.0; 
   const double Class_B_Price = 12.0; 
   const double Class_C_Price = 9.0;
   
   int soldA , soldB , soldC;
   double total;
   

   cout << "How many Class A tickets were sold? : ";
   cin >> soldA;
   
   cout << "How many Class B tickets were sold? : ";
   cin >> soldB;
   
   cout << "How many Class C tickets were sold? : ";
   cin >> soldC;
   
   total = (soldA * Class_A_Price) + 
           (soldB * Class_B_Price) + 
           (soldC * Class_C_Price);
             
     cout << "Total revenue: $" << setprecision(2) << fixed << total << endl;
    
  
  system("pause");

   return 0;
}
