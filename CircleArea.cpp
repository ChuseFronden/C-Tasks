#include <iostream>
using namespace std;

int main()
{
  double radius;
  double value = 3.142;
  double area_Radius;

  cout << "Input circle radius:";
  cin >> radius;

  area_Radius = (radius * radius) * value;

  cout << "Circle area with the given radius: " << area_Radius << endl;
}