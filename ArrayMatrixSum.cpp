#include <iostream>
using namespace std;
 
int main()
{
	int first_matrix[5][5] = { 	
			 2, 34, 23, 21, 58,
			 3,  6, 56,  2,  9,
			76, 92,  2,  4, 77,
			 1, 45, 45,  8, 33,
			99,  3, 34,  5, 78 };

	int second_matrix[5][5] = { 
			45,  3, 34,  6, 77,
			 2, 45, 67,  3,  2,
			21, 23, 54, 67, 67,
			43,  2, 45, 99,  0,
			54, 76, 88, 63,  5 };

	int y, x;
	int sum_matrix[5][5];

	for(y = 0; y < 5; y++) {
		for(x = 0; x < 5; x++) {
			sum_matrix[y][x] = first_matrix[y][x] + second_matrix[y][x];

			if(x == 4) {
				cout << sum_matrix[y][x] << "\n";
			} else {
				cout << sum_matrix[y][x] << "\t";
			}
		}
	}
}

