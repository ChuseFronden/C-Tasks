#include <iostream>

using namespace std;

 
int main()

{
  int grade;
  int sum = 0;
  int average;
  int count = 0;

   cout << "Program calculates the test grade average.\n"; 
    cout << "Finish inputting with a negative number.\n";
    cout << "Input grade (4-10) ";
    cin >> grade;

while (grade > 0){
    cout << "Input grade (4-10) ";
    cin >> grade;

      if(grade >=4 && grade <=10) {
     count++;
     sum = sum + grade;
     average = sum/count;
      }
      

  }
cout << "You inputted " << count << " grades. " << endl;
  cout << "Grade average: " << average << endl;
}
