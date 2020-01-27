/*
  Ian Rasmussen
  2317200
  irasmussen@chapman.edu
  CPSC 298-01
  Assignment 2
  salestax
*/

#include <iostream>

using namespace std;

// The function where it calculates the total cost of the item. Has the tax rate
// and cost of item as its parameters.
float addTax(float taxRate, float costOfItem)
{
  float total = 0;
  taxRate /= 100; // Divide the tax rate by 100 to convert it from ex: 9.5 to 0.095

  total = costOfItem * (1 + taxRate); // Finds the total cost of the item

  return total;
}

int main(int argc, char **argv)
{
  // Initialize my variables at the beginning
  float totalCost = 0.0; // This is what the total cost of the item will be
  float costOfItem = 0.0; // Cost of the item inputed
  float salesTax = 0.0; // Sales tax of the item inputed

  // Ask user for the total cost of the item, then is inputed
  cout << "Enter the total cost of the item: ";
  cin >> costOfItem;

  // Asks user for sales tax, then is inputed
  cout << "Enter the sales tax: ";
  cin >> salesTax;

  // Call the addTax function and store the value into the totalCost variable
  totalCost = addTax(salesTax, costOfItem);

  cout << endl;
  cout << "The total cost of the item is $" << totalCost << endl; // Print final value

  return 0;
}
