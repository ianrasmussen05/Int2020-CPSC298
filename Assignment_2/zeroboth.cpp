/*
  Ian Rasmussen
  2317200
  irasmussen@chapman.edu
  CPSC 298-01
  Assignment 2
  zeroboth
*/

#include <iostream>

using namespace std;

// A void function that uses the address of variables as the paramters to it can be
// changed later on in the main. Changes values to 0.
void bothZero(int& num1, int& num2)
{
  num1 = 0;
  num2 = 0;
}

int main(int argc, char **argv)
{
  // Create base ints
  int firstNum = 10;
  int secondNum = 5;

  // Prints out the variables declared above
  cout << "The starting numbers: " << endl;
  cout << firstNum << endl;
  cout << secondNum << endl;

  // Calls the void function to set the variables above to zero using its address
  bothZero(firstNum, secondNum);

  // Prints zero for both values
  cout << "Now to zero:" << endl;
  cout << firstNum << endl;
  cout << secondNum << endl;

  return 0;
}
