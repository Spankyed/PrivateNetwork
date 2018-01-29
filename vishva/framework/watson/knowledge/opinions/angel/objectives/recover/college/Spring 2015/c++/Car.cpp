// example: one class, two objects
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

class Car 
{ int year, speed;
  string make;
    
  public:
         
    Car(int y = 2010, string m = "Unkown")
    {    year = y;
         make = m;
         speed = 0;
    
    }
    
    int getYear();
    int getSpeed();
    string getMake();
    void accelerate ();
    void brake ();
    
};


int Car::getYear ()
{ return year;
}
string Car::getMake ()
{ return make;
}
int Car::getSpeed ()
{ return speed;
}

void Car::accelerate ()
{ speed += 5;
}

void Car::brake ()
{
speed -= 5;
}


int main()
{   Car minivan(2010, "Kia");

    for (int i = 0; i < 4; i++)
    {   minivan.accelerate();
        cout << "You are accelerating. Current speed is " << minivan.getSpeed() << endl;    
    }
    
    for (int i = 0; i < 4; i++)
    {   minivan.brake();
        cout << "You are braking. Current speed is " << minivan.getSpeed() << endl;   
    }
system("pause");
}

