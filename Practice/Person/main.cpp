#include "class_demo.h"

int main(int argc, char **argv)
{
  Person *p = new Person();
  Person *p2 = new Person("Ian", 19, "Blue");

  p->setName("foobar");
  cout << "My name is " << p->getName() << endl;
  cout << "My name is " << p2->getName() << endl;

  cout << "Address of P: " << p << endl;
  cout << "Address of P2: " << p2 << endl;

  delete p;
  delete p2;

  return 0;
}
