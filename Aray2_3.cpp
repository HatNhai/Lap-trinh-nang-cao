#include <iostream>
#include <cmath>

using namespace std;

void inputArray(int &n, int a[100][100]){
	do {
		cout << "Nhap n = "; cin >> n;
	}while (n <= 0 || n >= 10);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << "A[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

void outputArray(int n, int a[100][100]){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << " " << a[i][j];
		if (j < n - 1) cout << "";
	}
	if (i < n - 1) cout << endl;
	}
}

int checkSnt(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++){
		if (x % i == 0) return 0;
	}
	return 1;
}

int demSnt(int n, int a[100][100]){
	int dem = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (checkSnt(a[i][j])) dem++;
		}
	}
	return dem;
}


int main(){
	int n, a[100][100];
	inputArray(n, a);
	cout << "Ma tran A:" << endl;
	outputArray(n, a);
	cout << "\nCo " << demSnt(n, a) << " so nguyen to!";
	
	return 0;
}
