

#include <iostream>

using namespace std;

int largest(int first, int second, int third);
int smallest(int first, int second, int third);

int main()

{

  int number1, number2, number3, largestNumber, smallestNumber;

  cout << "Input the first integer:";
  cin >> number1;

  cout << "Input the second integer:";
  cin >> number2;

  cout << "Input the third integer:";
  cin >> number3;

  largestNumber = largest(number1, number2, number3);
  smallestNumber = smallest(number1, number2, number3);

  cout << "The largest number was " << largestNumber;
  cout << " and the smallest " <<smallestNumber << "." << endl;
}

int largest(int number1, int number2, int number3) {
    int largestNumber;
    if(number1 > number2 && number1 > number3) {
        largestNumber = number1;
    }
    else if(number2 > number1 && number2 > number3) {
        largestNumber = number2;
    }
    else {
        largestNumber = number3;
    }
}
int smallest(int number1, int number2, int number3){
    int smallestNumber;
   if(number1 < number2 && number1 < number3) {
        smallestNumber = number1;
    }
    else if(number2 < number1 && number2 < number3) {
        smallestNumber = number2;
    }
    else {
        smallestNumber = number3;
    }
}