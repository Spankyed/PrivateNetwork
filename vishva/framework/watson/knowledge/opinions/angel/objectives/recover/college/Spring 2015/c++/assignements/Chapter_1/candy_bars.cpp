//Programming Challenge from chapter 2.
//Computes the tax and tip on a restaurant bill for a patron.

#include <iostream>


using namespace std;

int main (void)
{

	double mealCost, tax, subtotal, total;
    int tip; 
    
    //Compute costs.
    mealCost = 44.50;               
    tax = 0.0675 * mealCost;
    subtotal = mealCost + tax;
    tip = mealCost * 0.15;
    total = subtotal + tip;
    
    //Display costs.
	cout << "Meal cost: " << mealCost << endl;
	
	cout << "Tax: " << tax << endl;
	
	cout << "Subtotal: " << subtotal << endl;

	cout << "Total (tip included): " << total << endl;
    	
	system("pause");
	return 0;
}
