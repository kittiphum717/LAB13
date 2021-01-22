#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int j = 1;j < N;j++){
		T temp = d[j];
		if(temp > d[j-1]){
			for(int i = j-1;i >= 0;i--){
				d[i+1] = d[i];
				if(temp <= d[i-1] or i == 0){
					d[i] = temp;
					break;
				}
			}
		}
		cout << "Pass " << j << ":";
		for(int k = 0;k < N;k++){
			cout << d[k] << " ";
		}
		cout << endl;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

