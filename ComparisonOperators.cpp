#include <iostream>
#include <string>
using namespace std;

int main()
{
    char search_char;
    cout << "Are you a male or a female (m/f):";
    cin >> search_char;
    int age;

    if(search_char == 'm') {
        
        cout << "Your age:";
    cin >> age;
  if(age >= 0 && age <= 55){
      cout << "You are a man in his prime!" << endl;
  }
  else if (age >= 56 && age <= 100) {
      cout << "You are a wise man!" << endl;
  }
  else {
      cout << "Error encountered!" << endl;
  }

    }

   else{
       cout << "Your age:";
  cin >> age;
       if(age >= 0 && age <= 55){
      cout << "You are like a blooming flower!" << endl;
  }
  else if (age >= 56 && age <= 100) {
      cout << "You look young for your age!" << endl;
  }
  else {
      cout << "Error encountered!" << endl;
  }   

   }
         

        
    }





