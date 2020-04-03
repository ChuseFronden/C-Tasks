#include<iostream>

using namespace std;

 
int calculation(int number);

 
int main()

{

  int number, answer;

  cout << "Input number:";

  cin >> number;

  answer = calculation(number);

  cout << "Asnwer is " << answer;

}

 
int calculation(int number)

{

  int answer;

  answer = number * number;

  return answer;

}