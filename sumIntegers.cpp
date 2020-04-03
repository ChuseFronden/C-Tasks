#include <iostream>
using namespace std;

int main()
{
  int number;
  int secondNumber;
  int number_sum;

  cout << "Type the first number:";
  cin >> number;

  cout << "Type the second number:";
  cin >> secondNumber;
  number_sum = number + secondNumber;

  cout << "Sum of the numbers is " << number_sum << endl;
}