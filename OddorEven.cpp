#include <iostream>
using namespace std;

int main()
{
  int first_number;
  int divide;
 
  

  cout << "Input an integer: ";
  cin >> first_number;
  divide = first_number%2;

  if(divide == 0) {
cout << "The number " << first_number << " is even." << endl;
  }
  else {
      cout << "The number " << first_number << " is odd." << endl;
  }
  

  
 
}