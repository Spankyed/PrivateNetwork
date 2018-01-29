//Time Calculator
//This program converts seconds to days, hours, or minutes
//Whichever is most appropriate.
//Angel Santiago

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SEC_PER_DAY = 86400,
              SEC_PER_HR = 3600,
              SEC_PER_MIN = 60;
              
    double seconds;
    
    cout <<"This program will convert seconds to days, hours, or minutes. \n\n";
    cout <<"Enter the number of seconds (60 or more): ";
    cin  >> seconds;
    
    cout << fixed << setprecision(2);
    
    if (seconds >= SEC_PER_DAY)
       cout << "This equals " << seconds / SEC_PER_DAY << " days. \n";
    else if (seconds >= SEC_PER_HR)
       cout << "This equals " << seconds / SEC_PER_HR << " hours. \n";
    else if (seconds >= SEC_PER_MIN)
       cout << "This equals " << seconds / SEC_PER_MIN << " minutes. \n";
    else
        cout << "This is less than one minute. \n";
        
    system("pause");
    
    return 0;
}
