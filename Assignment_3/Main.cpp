/*
  Ian Rasmussen
  2317200
  irasmussen@chapman.edu
  CPSC 298-01
  Assignment 3
  main.cpp
*/

#include "Pet.h"

int main(int argc, char **argv)
{
  Pet *pet1 = new Pet(); // Created the default pet
  Pet *pet2 = new Pet("Lucy", 1, "Cat", 14.3); // Created my own pet here

  cout << "Pet 1:" << endl;
  pet1->print(); // Pet1 pointer to the print method to print all attributes

  cout << endl;
  cout << "Pet 2:" << endl; // Pet2 pointer to print all the attributes
  pet2->print();

  // Delete the instances of variables created above to not have memory leak
  delete pet1;
  delete pet2;

  return 0;
}
