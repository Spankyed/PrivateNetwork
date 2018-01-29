// example: one class, two objects
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

class Inventory 
{ int itemNumber, quantity;
  double cost;
    
  public:
    void construct (int,string);
    int getYear();
    int getSpeed();
    string getMake();
    void setItemNumber (int);
    void setQuantity (int);
    void setItemNumber (double);
    
};

void Inventory::defaultConstruct (int YEAR, string MAKE) 
{ itemNumber = 0;
  quantity = 0;
  cost = 0;
}

void Inventory::construct (int YEAR, string MAKE) 
{ int sNum, sQuant, sCost; 
  cout << "Item Number: "
  cin >> sNum;
  Car.setItemNumber(sNum);
  cout << "Item Quantity: "
  cin >> sQuant;
  Car.setQuantity(sQuant);
  cout << "Item Cost: "
  cin >> sCost;
  Car.setCost(sCost);
}

void Car::setItemNumber (int num)
{ itemNumber = num;
}
void Car::setQuantity (int quant)
{ quantity = quant;
}
void Car::setCost (int COST)
{ cost = COST;
}

string Car::getItemNumber ()
{ return itemNumber;
}
int Car::getQuantity ()
{ return quantity;
}
int Car::getCost ()
{ return cost;
}
int Car::getTotalCost ()
{ 
    return cost;
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
