#include "class_demo.h"

Person::Person()
{
  m_name = "\0";
  m_age = 0;
  m_eyeColor = "\0";
}

Person::Person(string name, int age, string eyeColor)
{
  m_name = name;
  m_age = age;
  m_eyeColor = eyeColor;
}

string Person::getName()
{
  return m_name;
}

int Person::getAge()
{
  return m_age;
}

string Person::getEyeColor()
{
  return m_eyeColor;
}

void Person::setName(string name)
{
  m_name = name;
}

void Person::setAge(int age)
{
  m_age = age;
}

void Person::setEyeColor(string eyeColor)
{
  m_eyeColor = eyeColor;
}
