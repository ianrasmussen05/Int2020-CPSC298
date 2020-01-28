/*
  Ian Rasmussen
  2317200
  irasmussen@chapman.edu
  CPSC 298-01
  Assignment 2
  conversion
*/

#include <iostream>

using namespace std;

void userInput(int& feet, int& inches)
{
  cout << "Enter the length in feet: ";
  cin >> feet;

  cout << "Enter the remaining length in inches: ";
  cin >> inches;

  return;
}

void convertFeetToMeters(int feet, int inches, int& meters, int& centimeters)
{
  int total = 0;
  double totalFeet = 0;
  double meterToFeet = 0;
  double totalMeter = 0;
  double centimeter = 0;

  meters = 1.0 / 0.3048;
  totalFeet = feet + (inches / 12) + ((inches % 12) / 12.0);
  totalMeter = totalFeet / meter;

  total = totalMeter;

  return;
}

void outputValues(int feet, int inches, int meters, int centimeters)
{
  cout << "With " << feet << " feet and " << inches << " inches. " << endl;
  cout << "It converts to " << meters << " meters and " << centimeters << " centimeters." << endl;

  return;
}

int main(int argc, char **argv)
{
  int feet = 0;
  int inches = 0;
  int meters = 0;
  int centimeters = 0;

  userInput(feet, inches);


  outputValues(feet, inches, meters, centimeters);

  return 0;
}
