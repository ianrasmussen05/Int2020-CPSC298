/*
  Ian Rasmussen
  2317200
  irasmussen@chapman.edu
  CPSC 298-01
  Assignment 1
  inflation
*/

#include <iostream>

using namespace std;

int main (int argc, char ** argv)
{
  // Declare all my variables as floats to use less memory
  float costOfItem = 0.0;
  float inflationRate = 0.0;
  float totalCost = 0.0;
  int numOfYears = 0;

  // Ask the user for the cost of the item
  cout << "The cost of the item: ";
  cin >> costOfItem;

  float dummyCostOfItem = costOfItem;

  // Ask user for the years the item will be purchased
  cout << "The number of years the item will be purchased: ";
  cin >> numOfYears;

  // Ask the user for the percentage of inflation
  cout << "Enter the inflation rate as a percentage: ";
  cin >> inflationRate;

  // Find the percentage in decimal form to be used later
  inflationRate /= 100.0;

  // Have a for loop that iterates the amount of years the user inputed
  for (int i = 1; i <= numOfYears; ++i)
  {
    // Set the total cost of the item from that specific year and multiply by the
    // inflation rate then adding the cost of the item
    totalCost = (costOfItem * inflationRate) + costOfItem;
    // Update the cost of the item for the next year
    costOfItem = totalCost;

    // Print out the total cost of the item each year
    cout << "The total cost from year " << i << " is $" << totalCost << endl;
  }

  return 0;
}
