/*
  Ian Rasmussen
  2317200
  irasmussen@chapman.edu
  CPSC 298-01
  Assignment 2
  intarray
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int numberArray[10]; // Set my array to a size of 10
  int userInput = 0; // int variable where the user can input a value
  int counter = 0; // counter variable that iterates through the loop

  while (counter >= 0)
  {
    // This if statement checks to see if the counter reaches 10, which is the size of the array
    // it then breaks the for loop
    if (counter == 10)
    {
      break;
    }

    // Asks user input for the first part of the array
    cout << "Enter the number for array spot " << counter << ": ";
    cin >> userInput;

    // Checks if user inputed a positive integer
    if (userInput >= 0)
    {
      numberArray[counter] = userInput;
      counter++; // Adds to the counter variable to keep the loop going
    }
    else // If the user entered a negative number
    {
      cout << "You entered the wrong number! Please try again..." << endl;
    }
  }

  // Iterates through numberArray and prints each value
  for (int i = 0; i < 10; ++i)
  {
    cout << numberArray[i] << endl;
  }

  return 0;
}
