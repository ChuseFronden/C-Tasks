#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int first_triangle;
  int second_triangle;
  double c;
  double side1;
  double side2;
  double side3;
  
  

  cout << "Input first triangle leg:";
  cin >> first_triangle;

  cout << "Input second triangle leg:";
  cin >> second_triangle;
 {
  side1= pow(first_triangle,2);
  side2= pow(second_triangle,2);
  side3 = sqrt((side1+side2));
  cout << "Hypotenuse length: " << side3 << endl;
  }


 
}
