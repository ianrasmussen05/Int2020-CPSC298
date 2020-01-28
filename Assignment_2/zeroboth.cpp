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

// The void function where it sets the two parameters to zero
void bothZero(int& num1, int& num2)
{
  num1 = 0;
  num2 = 0;
}

int main(int argc, char **argv)
{
  int firstNum = 10;
  int secondNum = 5;

  cout << "The starting numbers: " << endl;
  cout << firstNum << endl;
  cout << secondNum << endl;

  bothZero(firstNum, secondNum);

  cout << "Now to zero:" << endl;
  cout << firstNum << endl;
  cout << secondNum << endl;

  return 0;
}
