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

// This method gets the user input when called on. The two parameters use an address
// to allow the variables to be changed in another method if needed.
void userInput(int& feet, int& inches)
{
  // Asked the user to input the feet
  cout << "Enter the length in feet: ";
  cin >> feet;

  // Asked the user to input the inches
  cout << "Enter the remaining length in inches: ";
  cin >> inches;

  return;
}

// This function is the conversion from feet and inches to meters and centimeters.
// I used addresses on meters and centimeters to allow the variables to be changed
// inside another method.
void convertFeetToMeters(int feet, int inches, float& meters, float& centimeters)
{
  float feetToMeter = 0.3048; // This is how many meters is in one foot
  float inchToMeter = 0.0254; // This is how many meters is in one inch

  // Found the conversion by multiplying given feet to meters and given inches with meters
  meters = (feet * feetToMeter) + (inches * inchToMeter);
  centimeters = (feet * (feetToMeter * 100)) + (inches * (inchToMeter * 100));

  return;
}

// This is the printing method for the program. Inputs four parameters and prints each value.
void outputValues(int feet, int inches, float meters, float centimeters)
{
  cout << "With " << feet << " feet and " << inches << " inches. " << endl;
  cout << "It converts to " << meters << " meters and " << centimeters << " centimeters." << endl;

  return;
}

int main(int argc, char **argv)
{
  // Declare all the variables to zero or null
  int feet = 0;
  int inches = 0;
  float meters = 0;
  float centimeters = 0;
  string stringInput = "\0";

  while (true)
  {
    userInput(feet, inches); // Calls onto the userInput method and changes the feet and inches values
    convertFeetToMeters(feet, inches, meters, centimeters); // Calls the conversion method and changes meters and centimeters
    outputValues(feet, inches, meters, centimeters); // Calls the output method and prints the values

    // This block is asking the user if they want to run the program again.
    cout << "Enter 'stop' to exit the program... ";
    cin >> stringInput;
    if (stringInput == "stop")
    {
      break;
    }
    else
    {
      continue;
    }
  }

  return 0;
}
