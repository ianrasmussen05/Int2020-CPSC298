#include "class_demo.h"

int main(int argc, char **argv)
{
  /*
  // On the stack, quicker and easier to use. Run into obstacles using a lot of code
  CPSC298Utils cp;
  cout << "ON THE STACK: There are " << cp.countVowels("Ian") << " vowels." << endl;

  // On the heap, better practice and makes sure the memory isn't lost when running
  CPSC298Utils *cps = new CPSC298Utils();
  cout << "ON THE HEAP: There are " << cps->countVowels("Ian") << " vowels." << endl;

  // must use delete word to delete the new instance of cps so there isn't memory leaks
  delete cps;
  */

  int myVar = 5;
  int *myPtr;
  myPtr = &myVar;

  cout << "myVar: " << myVar << endl;
  cout << "myPtr: " << myPtr << endl;
  cout << "Dereference myPtr: " << *myPtr << endl;

  // Dereference and changes the value to 8
  *myPtr = 8;
  cout << "myVar after update: " << myVar << endl;

  return 0;
}
