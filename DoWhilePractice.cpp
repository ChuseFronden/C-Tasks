#include <iostream>
using namespace std;

int main()
{
	int given_number, square;

	do {
		cout << "Type an integer (end program by typing a negative number): ";
		cin >> given_number;

		if(given_number > 0) {
			square = given_number * given_number;
			cout << "The square of the number is: " << square << endl;
		} else if(given_number <= 0) {
			cout << "Closing program... " << endl;
		} 
	} while(given_number > 0);
}
