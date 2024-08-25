#include <iostream>

using namespace std;

void inputArray(int &n, int a[100][100]){
	do {
		cout << "Nhap n = "; cin >> n;
	}while (n <= 0 || n >= 10);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
		cout << "A[" << i << "]["<< j << "] = ";
		cin >> a[i][j]; 
		}
	}
}

int compareMinArray(int &n, int a[100][100]){
	int min = a[0][0];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (a[i][j] <= min) min = a[i][j];
		}
	}
	return min;
}

int compareMaxArray(int &n, int a[100][100]){
	int max = a[0][0];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (a[i][j] >= max) max = a[i][j];
		}
	}
	return max;
}

int soChia3(int n, int a[100][100]){
	int dem = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (a[i][j] % 3 == 0) dem++;
		}
	}	
	return dem;
}

int main (){
	int n;
	int a[100][100];
	
	inputArray(n, a);
	
	cout << "Min: " << compareMinArray(n, a);
	cout << "\nMax: " << compareMaxArray(n, a);
	cout << "\nSo chia het cho 3: " << soChia3(n, a);
	
	return 0;
}
