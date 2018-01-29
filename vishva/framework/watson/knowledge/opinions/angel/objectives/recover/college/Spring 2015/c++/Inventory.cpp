// example: one class, two objects
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

class Inventory 
{ int itemNumber, quantity;
  double cost, totalCost;
    
  public:
    Inventory(int itmNum, int quant, double cos)
    {    setItemNumber(itmNum);
         setQuantity(quant);
         setCost(cos);
         setTotalCost();
    }       
         
    void setItemNumber (int);
    void setQuantity (int);
    void setCost(double);
    void setTotalCost();
    int getItemNumber();
    int getQuantity();
    double getCost();
    double getTotalCost();
    
};


void Inventory::setItemNumber (int num)
{ itemNumber = num;
}
void Inventory::setQuantity (int quant)
{ quantity = quant;
}
void Inventory::setCost (double cos)
{ cost = cos;
}
void Inventory::setTotalCost ()
{ totalCost = cost * quantity;
}

int Inventory::getItemNumber ()
{ return itemNumber;
}
int Inventory::getQuantity ()
{ return quantity;
}
double Inventory::getCost ()
{ return cost;
}
double Inventory::getTotalCost ()
{ 
    return totalCost;
}


int main()
{   
    int itmNumber, quantity, cost, i = 0;
    
    do 
    {
    if (i > 0)
    cout << "You entered an invalid value. Please enter a item number greater than one, quantity greater than 0, or cost great than 0";
    
    cout << "Enter item Number: ";
    cin >> itmNumber;
    cout << "Enter item Quantity: ";
    cin >> quantity;
    cout << "Enter item cost: ";
    cin >> cost;
    Inventory item(itmNumber, quantity, cost);  
    
    cout << "Inventory item added. The total cost was. $" << item.getTotalCost() << endl;
    i++;
    }   while (itmNumber< 0 || quantity < 0 || cost < 0);
    
system("pause");
}
