//Lottery Winners
// This program uses a linear search to see if an entered winning 5-digit lottery number matches the number on any of the player's tickets.
// Angel Santiago
#include <iostream>
using namespace std;

bool searchList(const long [], int, long); 

const int SIZE = 10;
int main()
{
    long ticket[SIZE] = { 13579, 26791, 26792, 33445, 55555,
                          62483, 77777, 79422, 85647, 93121};
    long winningNum;
    
    cout << "Please enter this week's 5-digit winning lottery number: ";
    cin >> winningNum;
    
    if (searchList(ticket, SIZE, winningNum))
       cout << "You have a winning ticket. \n";
    else 
       cout << "You did not win this week." << endl;
    
    system("pause");
    return 0;
}  


//SearchList function

bool searchList(const long list[], int numElems, long value)
{
     bool found = false;
     
     for (int count = 0; count < numElems && !found; count++)
     {   if (list[count] == value)
            found = true;
     }
     return found;
}
