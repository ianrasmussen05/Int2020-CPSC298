#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
  int quizArray[5];
  int quiz = 0;
  int totalQuiz = 0;
  double avg = 0.0;

  for (int i = 0; i < 5; ++i)
  {
    cout << "Enter the score of the quiz: ";
    cin >> quiz;

    quizArray[i] = quiz;
  }

  for (int i = 0; i < 5; ++i)
  {
    totalQuiz += quizArray[i];
  }

  avg = totalQuiz / 5.0;

  cout << "The average score of the quizes: " << avg << "%" << endl;

  return 0;
}
