#include <iostream>

using namespace std;

int numSquare (int num)
{
  return num * num;
}

int main (int argc, char **argv)
{
  cout << "Command line argument count: " << argc << endl;

  if (argc < 2)
  {
    cout << "Invalid usage, please provide input" << endl;
    exit(-1);
  }

  // atoi is alpha to integer
  cout << "The value squared of " << argv[1] << " is " << numSquare(atoi(argv[1])) << endl;

  return 0;
}
