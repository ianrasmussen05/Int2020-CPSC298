#include "class_demo.h"

CPSC298Utils::CPSC298Utils()
{
  // Initialized the default constructor for good practice
  // Initialize variables ot default value
}

int CPSC298Utils::countVowels(string input)
{
  int counter = 0;
  char c = '\0';

  for (int i = 0; i < input.size(); ++i)
  {
    c = tolower(input[i]);

    if (c == 'a')
    {
      counter++;
    }
    else if (c == 'e')
    {
      counter++;
    }
    else if (c == 'i')
    {
      counter++;
    }
    else if (c == 'o')
    {
      counter++;
    }
    else if (c == 'u')
    {
      counter++;
    }
    else
    {
      continue;
    }
  }

  return counter;
}
