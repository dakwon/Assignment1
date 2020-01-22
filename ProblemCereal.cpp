#include <iostream>
using namespace std;

int main() {
  double metricTon = 35273.92;
  double ounce;
  double WeightCalc;
  double numberBoxes;

  cout << "What is the weight of your packaged cereal? " << endl;
  cin >> ounce;

  WeightCalc = ounce / metricTon;
  cout << "The weight of your cereal is " << WeightCalc << " tons." << endl;

  numberBoxes = metricTon / ounce;
  cout << "The number of boxes it would take for one ton is " << numberBoxes << " boxes." << endl;

  return 0;
}
