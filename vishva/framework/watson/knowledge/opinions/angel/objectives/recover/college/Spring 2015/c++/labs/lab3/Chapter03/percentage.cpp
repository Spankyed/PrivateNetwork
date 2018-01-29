// Lab 3 percentage.cpp
// This program will determine the percentage 
// of answers a student got correct on a test.
// PUT YOUR NAME HERE.

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
   string nameFirst , nameLast;
   double numQuestions , numCorrect, percentage;

   
   // Get student's test data
   cout << "Enter student's first and last name: ";
   cin >> nameFirst >> nameLast;
   
   
   cout << "\nNumber of questions on the test: ";
   cin  >> numQuestions;
   cout << "\nNumber of answers the student got correct: ";
   cin  >> numCorrect;
   
      cout << "\n" << numQuestions << " "<< numQuestions << "\n";
  
   // Compute and display the student's % correct
   
   percentage = (numCorrect / numQuestions) * 100.0;
   
   cout << nameFirst << " " << nameLast << " scored " 
   << setprecision(1) << percentage << "% on the test\n";

   system("pause");
   
   return 0;
}
