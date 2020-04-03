#include <iostream>
using namespace std;

int main()
{
  int first_number;
  int second_number;
  int sum;
  int minus;
  int multi;
  int remainder;
  

  cout << "Input first integer:";
  cin >> first_number;

  cout << "Input second integer:";
  cin >> second_number;

  sum = first_number + second_number;
  minus = first_number - second_number;
  multi = first_number *  second_number;
  remainder = first_number % second_number;

  cout << first_number << "+" << second_number << " = " << sum << endl;
  cout << first_number << "-" << second_number << " = " << minus << endl;
  cout << first_number << "*" << second_number << " = " << multi << endl;
 cout << "Remainder: " << remainder << endl;
}