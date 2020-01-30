#include "Business.h"

Restaurant::Restaurant()
{
  name = "\0";
  address = "\0";
  yearsInBusiness = 0;
  rating = 0;
  type = "\0";
}

Restaurant::Restaurant(string name, string address, int yearsInBusiness, int rating, string type)
{
  this->name = name;
  this->address = address;
  this->yearsInBusiness = yearsInBusiness;
  this->rating = rating;
  this->type = type;
}

int Restaurant::getRating()
{
  return rating;
}
string Restaurant::getType()
{
  return type;
}

void Restaurant::setRating(int rating)
{
  this->rating = rating;
}
void Restaurant::setType(string type)
{
  this->type = type;
}

void Restaurant::print()
{
  cout << "Name: " << getName() << endl;
  cout << "Address: " << getAddress() << endl;
  cout << "Years in business: " << getYears() << endl;
  cout << "Rating: " << getRating() << endl;
  cout << "Type of food: " << getType() << endl;
}
