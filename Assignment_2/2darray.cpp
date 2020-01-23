/*
  Ian Rasmussen
  2317200
  irasmussen@chapman.edu
  CPSC 298-01
  Assignment 2
  2darray
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  const int NUM_ROWS = 4; // const variable to set rows for 2d array
  const int NUM_COLUMNS = 5; // const variable to set columns for 2d array 

  int array2d[NUM_ROWS][NUM_COLUMNS];
  int userInput = 0;

  for (int i = 0; i < NUM_ROWS; ++i)
  {
    for (int j = 0; j < NUM_COLUMNS; ++j)
    {
      cin >> userInput;
      array2d[i][j] = userInput;
    }
  }

  cout << endl;
  cout << "Your 2D Array:" << endl;

  for (int i = 0; i < NUM_ROWS; ++i)
  {
    for (int j = 0; j < NUM_COLUMNS; ++j)
    {
      cout << array2d[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
