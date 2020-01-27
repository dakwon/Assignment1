#include <iostream>
using namespace std;

int main() {

  const double regularHourPerWeek = 40.0;
  int dependent;
  int hours;
  double SocSecTax;
  double federalInTax;
  double stateInTax;
  double medInsurance = 10.0;
  double grossPay;
  double takeHomePay;
  double withHold;

  cout << "Enter the number of hours worked in a week: ";
  cin >> hours;

  if (hours > regularHourPerWeek)
  {
    grossPay = (16.0 * regularHourPerWeek) + (16.0 * 1.5) * (hours - regularHourPerWeek);
  }
  else
  {
    grossPay = 16.0 * hours;
  }

  SocSecTax = 0.06 * grossPay;
  federalInTax = 0.14 * grossPay;
  stateInTax = 0.05 * grossPay;

  withHold = SocSecTax + federalInTax + stateInTax + medInsurance;
  takeHomePay = grossPay - withHold;

  cout << "The number of hours worked in a week is " << hours << " hours." << endl;
  cout << "The worker's gross pay is " << grossPay << " dollars." << endl;
  cout << "The total withholding amount of money is " << withHold << " dollars."<< endl;
  cout << "The total net take-home pay for the week is " << takeHomePay << " ollars."<< endl;

  return 0;
}
