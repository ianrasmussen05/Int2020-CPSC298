/*
  Ian Rasmussen
  2317200
  irasmussen@chapman.edu
  CPSC298-01
  Assignment 1
  fire capacity
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int maxCapacity = 0;
  int numOfPeople = 0;

  // Inputs the maximum capacity of the room
  cout << "What is the maximum room capacity for the meeting room? ";
  cin >> maxCapacity;

  // Inputs for the number of people attending meeting
  cout << "How many people will be meeting? ";
  cin >> numOfPeople;

  // Checks to see if the maximum capacity of the room is greater than or equal to the amount of people in the meeting
  if (maxCapacity >= numOfPeople)
  {
    // Has the remainder of how many people can be in the room
    cout << "It is legal to hold the meeting here and " << maxCapacity - numOfPeople << " more people can be here." << endl;
  }
  else
  {
    // Has the remainder of much people they have
    cout << "The meeting cannot be held here due to fire safety regulations. " << numOfPeople - maxCapacity << " people have to leave." << endl;
  }

  return 0;
}
