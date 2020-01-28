#include <iostream>

using namespace std;

class Person
{
private:
  string m_name;
  unsigned int m_age;
  string m_eyeColor;
public:
  Person();
  Person(string name, int age, string eyeColor);

  // Accessors or Getters
  string getName();
  int getAge();
  string getEyeColor();

  // Mutators or Setters
  void setName(string name);
  void setAge(int name);
  void setEyeColor(string eyeColor);
};
