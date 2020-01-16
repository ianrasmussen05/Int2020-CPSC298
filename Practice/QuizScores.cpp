#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
  int quizArray[5];
  int quiz1 = 0;
  int quiz2 = 0;
  int quiz3 = 0;
  int quiz4 = 0;
  int quiz5 = 0;
  int totalQuiz = 0;
  double avg = 0.0;

  cout << "Enter the grade from the first quiz: ";
  cin >> quiz1;
  quizArray[0] = quiz1;

  cout << "Enter the grade from the second quiz: ";
  cin >> quiz2;
  quizArray[1] = quiz2;

  cout << "Enter the grade from the third quiz: ";
  cin >> quiz3;
  quizArray[2] = quiz3;

  cout << "Enter the grade from the fourth quiz: ";
  cin >> quiz4;
  quizArray[3] = quiz4;

  cout << "Enter the grade from the fifth quiz: ";
  cin >> quiz5;
  quizArray[4] = quiz5;

  for (int i = 0; i < 5; ++i)
  {
    totalQuiz += quizArray[i];
  }

  avg = totalQuiz / 5.0;

  cout << "The average score of the quizes: " << avg << "%" << endl;

  return 0;
}
