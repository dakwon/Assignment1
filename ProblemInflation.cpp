#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int numYears, i;
  double itemCost;
  double inflationRate;
  std::cout << std::setprecision(3);
  //cout.setprecision(3);

  cout << "Enter the price of the item: ";
  cin >> itemCost;
  cout << "Enter the number of years from now: ";
  cin >> numYears;
  cout << "Enter the rate of inflation in percentage (omit % mark): ";
  cin >> inflationRate;

  inflationRate = inflationRate / 100;
  for(i=0;i<numYears; ++i);
  itemCost = itemCost + itemCost * inflationRate;

  cout << "The price of the item after " << numYears << " years will be "
  << itemCost << "." << endl;

  return 0;
}
