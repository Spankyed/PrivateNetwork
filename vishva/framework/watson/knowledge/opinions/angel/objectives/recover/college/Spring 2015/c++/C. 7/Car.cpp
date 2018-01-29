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
    void construct (int,string);
    int getYear();
    int getSpeed();
    string getMake();
    void accelerate ();
    void brake ();
    
};

void Car::construct (int YEAR, string MAKE) 
{ year = YEAR;
  make = MAKE;
}

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
{   Car.construct(2007,"Kia");

    for (int i = 0; i < 4; i++)
    {   Car.accelerate();
        cout << "You are accelerating. Current speed is " << Car.getSpeed();    
    }
    
    for (int i = 0; i < 4; i++)
    {   Car.brake();
        cout << "You are braking. Current speed is " << Car.getSpeed();   
    }
}
