#include "Business.h"

Business::Business()
{
  name = "\0";
  address = "\0";
  yearsInBusiness = 0;
}

Business::Business(string name, string address, int yearsInBusiness)
{
  this->name = name;
  this->address = address;
  this->yearsInBusiness = yearsInBusiness;
}

// Getters
string Business::getName()
{
  return name;
}
string Business::getAddress()
{
  return address;
}
int Business::getYears()
{
  return yearsInBusiness;
}

// Setters
void Business::setName(string name)
{
  this->name = name;
}
void Business::setAddress(string address)
{
  this->address = address;
}
void Business::setYears(int yearsInBusiness)
{
  this->yearsInBusiness = yearsInBusiness;
}

void Business::print()
{
  cout << "Name: " << getName() << endl;
  cout << "Address: " << getAddress() << endl;
  cout << "Years in business: " << getYears() << endl;
}
