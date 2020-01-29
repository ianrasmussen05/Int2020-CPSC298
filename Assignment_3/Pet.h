/*
  Ian Rasmussen
  2317200
  irasmussen@chapman.edu
  CPSC 298-01
  Assignment 3
  Pet.h
*/

#include <iostream>

using namespace std;

class Pet
{
private:
  // Created all member variables
  string name;
  unsigned int age;
  string type;
  double weight;
public:
  // Default and overloaded constructor
  Pet();
  Pet(string name, int age, string type, double weight);

  // Accessors or Getters
  string getName();
  int getAge();
  string getType();
  double getWeight();

  // Mutators or Setters
  void setName(string name);
  void setAge(int age);
  void setType(string type);
  void setWeight(double weight);

  // Print method
  void print();
};
