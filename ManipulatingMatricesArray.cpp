#include <iostream>
#include <fstream>
using namespace std;

void print_matrix(int matrix[5][5]);
int count_sum(int matrix[5][5]);

int main(void)
{
  int matrix[5][5];
  int sum;
  ifstream number("matrix.txt");

  if (!number){
        cout << "Failed to open file...";
  }
  else {
    for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
            number >> matrix[y][x];
          }
    }
    number.close();
    cout << "Matrix:" << endl;
    print_matrix(matrix);
    sum = count_sum(matrix);
    cout << "Sum of elements: " << sum << endl;
  }
}

  
void print_matrix(int matrix[5][5]) {
     for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
            cin >> matrix[y][x];
			  if(x == 4) {
				cout << matrix[y][x] << "\n";
			} else {
				cout << matrix[y][x] << " ";
			}
          }
    }
	
}

int count_sum(int matrix[5][5]) {
    int matrix_sum = 0;;
    for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
              matrix_sum = matrix_sum + matrix[x][y];
    
          }
	}

    return matrix_sum;
    
}