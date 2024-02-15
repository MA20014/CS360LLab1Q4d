#include <iostream>
#include <iomanip>
using std::cout;

int main() {
    cout << std::fixed << std::showpoint;

    // Numbers with two decimal places
    double num1 = 23.62, num2 = 46.0, num3 = 43.4443, num4 = 100.1, num5 = 98.98;

    // Print the numbers in formatted floating-point notation with two decimal places
    cout << std::setw(8) << std::setprecision(2) << std::fixed << num1 << std::endl;
    cout << std::setw(8) << std::setprecision(2) << std::fixed << num2 << std::endl;
    cout << std::setw(8) << std::setprecision(2) << std::fixed << num3 << std::endl;
    cout << std::setw(8) << std::setprecision(2) << std::fixed << num4 << std::endl;
    cout << std::setw(8) << std::setprecision(2) << std::fixed << num5 << std::endl;

  double sum;

  // Calculate the sum of the numbers
  sum = num1 + num2 + num3 + num4 + num5;

  // Print the sum of the numbers
  cout << "The sum of the numbers is " << sum << "." << std::endl;

    return 0;
}