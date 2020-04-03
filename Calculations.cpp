#include <iostream>
using namespace std;
int main()
{
int number;
int first_number;
int second_number;
int subtraction;
int addition;
int multiplication;
int division;
int remainder;   
cout << "Choose desired calculation:\n";
cout << "1: subtraction\n";
cout << "2: addition\n";
cout << "3: multiplication\n";
cout << "4: division\n";
cout << "5: Remainder\n";
cout << "Choose a calculation:";
cin >> number;

switch (number)
{
case 1:
cout << "Input first number:";
cin >> first_number;

cout << "Input second number:";
cin >> second_number;

subtraction = first_number - second_number;

cout << first_number << "-" << second_number << " = " <<subtraction << endl;
break;

case 2:
cout << "Input first number:";
cin >> first_number;

cout << "Input second number:";
cin >> second_number;

addition = first_number + second_number;

cout << first_number << "+" << second_number << " = " << addition << endl;
break;

case 3:
cout << "Input first number:";
cin >> first_number;

cout << "Input second number:";
cin >> second_number;

multiplication = first_number * second_number;

cout << first_number << "*" << second_number << " = " << multiplication << endl;
break;

case 4:
cout << "Input first number:";
cin >> first_number;

cout << "Input second number:";
cin >> second_number;

division = first_number/second_number;

cout << first_number << "/" << second_number << " = " << division << endl;
break;

case 5:
cout << "Input first number:";
cin >> first_number;

cout << "Input second number:";
cin >> second_number;

remainder = first_number % second_number;

cout << first_number << "%" << second_number << " = " << remainder << endl;
break;


default:
    break;
}


}