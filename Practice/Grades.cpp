#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int userNum = 0;
  char letterGrade = 'a';

  cout << "Enter the grade: ";
  cin >> userNum;

  if (userNum >= 90)
  {
    letterGrade = 'A';
  }
  else if (userNum >= 80)
  {
    letterGrade = 'B';
  }
  else if (userNum >= 70)
  {
    letterGrade = 'C';
  }
  else
  {
    letterGrade = 'F';
  }

  cout << "The letter grade is an " << letterGrade << endl;

  return 0;
}
