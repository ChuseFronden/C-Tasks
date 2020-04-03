#include <iostream>
using namespace std;

int main()
{
    int days;
    cout << "The program calculates the total amount of\n";
    cout << "work hours during a given time frame and the average work day length.\n";
    cout << "How many days:\n";
    cin >> days;
	
	int index;
    float hours[days];

    float sum = 0;
    float average;


	for(index=0; index<days; index++) {
		cout << "Input hours of workday " << index+1 << ": ";
		cin >> hours[index];
        sum = sum + hours[index];
        average = sum/days;  
	}
        cout << "Total work hours: " << sum << endl ;
        cout << "Average work day length: " << average << endl;
        cout <<"Inputted hours: ";

    for(index=0; index<days; index++) {
        
        cout << hours[index] << " " ;
    }
    cout << endl;

}