#include <iostream>

using namespace std;

class Business
{
protected:
  string name;
  string address;
  int yearsInBusiness;

public:
  // Default and overloaded constructor
  Business();
  Business(string name, string address, int yearsInBusiness);

  // Accessors or Getters
  string getName();
  string getAddress();
  int getYears();

  // Mutators or Setters
  void setName(string name);
  void setAddress(string address);
  void setYears(int yearsInBusiness);

  // Print out business
  void print();
};

class Restaurant : public Business
{
private:
  int rating;
  string type;

public:
  // Default and overloaded constructor
  Restaurant();
  Restaurant(string name, string address, int yearsInBusiness, int rating, string type);

  // Accessors or Getters
  int getRating();
  string getType();

  // Mutators or Setters
  void setRating(int rating);
  void setType(string type);

  // Print out Restaurant
  void print();
};
