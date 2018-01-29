// Determines the number of days in a month for a specified month and year. 
//Angel Santiago
#include <iostream>

using namespace std;

// Function to get input
void getInput(int &month, int &year)
{    cout << "Enter a month (1-12) and a 4-digit year \n"
          << "seperated by a space (or 0 0 to quit): ";
     cin >> month >> year;
     
     while (month < 0 || month > 12)
     {     cout << "Month number must b between 1 and 12 (or 0 to quit) \n"
                << "Please reenter month: ";
           cin >> month;
     }         
}

// Is Leap Year Function
bool isLeapYear(int year)
{    if (year % 100 == 0)
        return (year% 400 ==0);
     else
        return (year % 4 == 0);   
     
}

enum MONTH {JAN, FEB, MARCH, APRIL, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
const string NAME_OF_MONTH[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
const int DAYS_IN_MONTH[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Function to get number of days in month
int numberOfDaysInMonth(int month, int year)
{   int numberOfDays = DAYS_IN_MONTH[month];
    if (month == FEB && isLeapYear(year))
       numberOfDays++;
       
    return numberOfDays;
}

// Function to get current month and year
void getCurrentMonthAndYear(int &month, int &year)
{    time_t epochSeconds = time(NULL);

     tm* tm_ptr = localtime(&epochSeconds);
     
     month = tm_ptr->tm_mon;
     year = tm_ptr->tm_year + 1900;
}



int main()
{
    int month, year;
    
    getInput(month, year);
    
    while(month !=0)
    {  
       month--;
       cout << numberOfDaysInMonth(month, year) << " days\n\n";
       
       getInput(month, year);                 
    }
    
    cout << endl;
    getCurrentMonthAndYear(month, year);
    cout << "The current month, " << NAME_OF_MONTH[month] << " " << year << ","
         << " has " << numberOfDaysInMonth(month, year) << " days. \n\n";
         return 0;
         
   system("pause");      
}
