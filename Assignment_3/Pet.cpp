/*
  Ian Rasmussen
  2317200
  irasmussen@chapman.edu
  CPSC 298-01
  Assignment 3
  Pet.cpp
*/

#include "Pet.h"

// The default constructor where I made a dog that my grandparents have
Pet::Pet()
{
  this->name = "Rosie";
  this->age = 6;
  this->type = "Dog";
  this->weight = 84.2;
}

// The overloaded constructor where the object can changed when using parameters
Pet::Pet(string name, int age, string type, double weight)
{
  // I prefer to use the this key word in my codes
  this->name = name;
  this->age = age;
  this->type = type;
  this->weight = weight;
}

// All the accessors or getters for the member variables
string Pet::getName()
{
  return name;
}

int Pet::getAge()
{
  return age;
}

string Pet::getType()
{
  return type;
}

double Pet::getWeight()
{
  return weight;
}

// All the mutators or setter for the member variables
void Pet::setName(string name)
{
  this->name = name;
}

void Pet::setAge(int age)
{
  this->age = age;
}

void Pet::setType(string type)
{
  this->type = type;
}

void Pet::setWeight(double weight)
{
  this->weight = weight;
}

// The print method where it prints the pets attributes when called. Use the accessors
// to accomplish this.
void Pet::print()
{
  cout << "Name: " << getName() << endl;
  cout << "Age: " << getAge() << endl;
  cout << "Type: " << getType() << endl;
  cout << "Weight: " << getWeight() << endl;

  return;
}
