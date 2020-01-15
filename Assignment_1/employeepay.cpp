/*
  Ian Rasmussen
  2317200
  irasmussen@chapman.edu
  CPSC 298-01
  Assignment 1
  employee pay
*/

#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
  // Initialized all my variables here and chose floats to take up less memory
  float minimumWage = 16.00;
  float socialSecurityTax = 0.06;
  float federalIncomeTax = 0.14;
  float stateIncomeTax = 0.05;
  int medicalInsurance = 10;
  float hoursWorked = 0;
  float grossPay = 0;

  cout << "Amount of hours the employee works in a week: ";
  cin >> hoursWorked;

  // Checked to see if the worker worked overtime this week
  if (hoursWorked > 40)
  {
    // Found the remainder of how many hours the worker worked overtime
    int remainder = hoursWorked - 40;

    // Found the pay for the overtime work
    float overTime = remainder * (minimumWage * 1.5);

    // Found the total gross pay after finding the normal hours worked with minimum wage and the overtime pay 
    grossPay = ((hoursWorked - remainder) * minimumWage) + overTime;
  }
  else
  {
    grossPay = hoursWorked * minimumWage;
  }

  // Initialized the variables of gross pay after each tax. Finally doing the net pay.
  float givenSocialSecurity = grossPay * socialSecurityTax;
  float givenFederalIncome = grossPay * federalIncomeTax;
  float givenStateIncome = grossPay * stateIncomeTax;
  float netPay = grossPay - givenSocialSecurity - givenFederalIncome - givenStateIncome - medicalInsurance;

  // Printed out the final results of the workers week before and after taxes
  cout << "The workers gross pay: $" << grossPay << endl;
  cout << "The workers net pay after taxes: $" << netPay << endl;

  return 0;
}
