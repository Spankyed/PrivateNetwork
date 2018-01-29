// Star Search
//Calculates and displays a contestant’s score.
// Angel Santiago

#include <iostream>
#include <cmath>
using namespace std;


void getJudgeData(double &score[5]);
double findLowest(double &low);
double findHighest(double &high);
double calcScore(double &finScore);


int main()
{
    const int judges = 5;
    
    getJudgeData();
    findLowest(double &low);
    findHighest(double &high);
    calcScore();
    
    
    system("pause");
    return 0;
}

//ask the user for a judge’s score, store it in a reference parameter variable, and validate it. 
//This function should be called by main once for each of the 5 judges.
void getJudgeData(double &score[5])
{
     for (int i = 1; i <= 5; i++)
    {    
     cout << "Enter Judge" << i << "'s score: ";
     cin  >> score[i];
     }
}

//calculate and return the average of the 3 scores that remain after dropping the highest and lowest scores the performer received. 
//This function should be called just once by main and should be passed the 5 scores.
double calcScore(double &finScore)
{
     int avg = 0;
     for(int i = 1; i <=5; i++)
     {   avg = avg + score[i];
     }
     finScore =  (avg - low - high) / 5;
     return finScore;
       
}

//returns the lowest of the 5 scores passed to it
double findLowest(double &low)
{
    for (int i = 1; i <= 5; i++)
    {    if (score[i] < score[i+1])
         low = score[i];    
    }
    return low;
}

//returns the highest of the 5 scores passed to it
double findHighest(double &high)
{
    for (int i = 1; i <= 5; i++)
    {    if (score[i] > score[i+1])
         high = score[i];    
    }
    return high;
}
