#include <iostream>

using namespace std;

 
int main()

{

  int i;

  int variable;
  int factorial = 1;
  cout << "Input an integer:";
  cin >> variable;

  for(i=1; i<=variable; i++)

  {
      factorial = factorial * i;
    
  }
cout << "The factorial of number " << variable << " is " <<factorial << endl;
}