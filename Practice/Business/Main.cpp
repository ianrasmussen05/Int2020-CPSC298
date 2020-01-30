#include "Business.h"

int main(int argc, char **argv)
{
  Business *bus1 = new Business("Scranton", "915 East Katella", 20);
  Restaurant *res1 = new Restaurant("Campo di Bocce", "707 Isabel Way", 13, 4, "Italian");

  bus1->setName("Cream");
  bus1->print();
  cout << endl;
  res1->print();

  delete bus1;
  delete res1;

  return 0;
}
