/*
  Ian Rasmussen
  2317200
  irasmussen@chapman.edu
  CPSC 298-01
  Assignment 1
  cereal
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  float metricTon = 35273.92;
  float userInput = 0.0;

  cout << "What is the weight of the package of cereal in ounces: ";

  cin >> userInput;

  // The formula to find how much the box of cereal weighs in metric tons
  float cerealInMetricTons = userInput / metricTon;
  cout << "The box weighs " << cerealInMetricTons << " metric tons." << endl;

  // The formula to find how much boxes of cereal is one metric ton
  float metricTonsOfCereal = metricTon / userInput;
  cout << "There has to be " << metricTonsOfCereal << " boxes of cereal to be one metric ton." << endl;

  return 0;
}
