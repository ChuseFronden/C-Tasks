#include <iostream>

using namespace std;

 
int main()

{
  int grade;
  float sum = 0;
  float average;
  int count = 0;

   cout << "Program calculates the test grade average.\n"; 
    cout << "Finish inputting with a negative number.\n";
    

while (grade > 0){
    cout << "Input grade (4-10) ";
    cin >> grade;

      if(grade >3 && grade <11) {
     count = count + 1;
     sum = sum + grade;
     average = sum/count;
      }
      

  }
cout << "You inputted " << count << " grades." << endl;
  cout << "Grade average: " << average << endl;
}


 


