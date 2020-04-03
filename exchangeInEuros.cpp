#include <iostream>
using namespace std;

int main()
{
  double dollars;
  double euros = 0.727802;
  double amount;

  cout << "How much dollars do you want to exchange:";
  cin >> dollars;

  amount = dollars * euros;

  cout << "Amount in euros: " << amount << endl;
}