#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double A[N][N]){
	int x = 1;
	for(int i = 0;i < N;i++){
		cout << "Row " << x << ": ";
		for(int j = 0;j < N;j++){
			cin >> A[i][j];
		}
		x++;
	}
}

void findLocalMax(const double x[][N], bool y[][N]){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			y[i][j] = 0;
		}
	}
	for (int i = 1; i < N-1; i++){
		for (int j = 1; j < N-1; j++){
			if (x[i][j] >= x[i - 1][j] && x[i][j] >= x[i][j + 1] && x[i][j] >= x[i + 1][j] && x[i][j] >= x[i][j - 1]){
				y[i][j] = 1;
			}
		}
	}
}

void showMatrix(const bool A[N][N]){
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}