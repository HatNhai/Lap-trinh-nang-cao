#include <iostream>

using namespace std;

void inputArray(int &n, double a[100]){
	do {
		cout << "Nhap n = "; cin >> n;
	}while (n <= 0 || n >= 100);
	for (int i = 0; i < n; i++){
		cout << "A[" << i + 1 << "] = ";
		cin >> a[i];
	}
}

void insertX(double &x, double a[100], int &n){
	if (n < 100){
		a[n] = x;
		n++;
	}	
}

void outputArray(int n, double a[100]){
	for (int i = 0; i < n; i++){
		cout << " " << a[i] ;
	}
}

void sortArray(int n, double a[100]){
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] < a[j]){
				double temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main(){
	int n;
	double a[100];
	double x;
	
	inputArray(n, a);
	
	cout << "Cho so x = "; cin >> x;
	insertX(x, a, n);
	cout << "Day so:";
	outputArray(n, a);
	
	sortArray(n, a);
	cout << "\nDay sap xep:";
	outputArray(n, a);
	
	
	
	
	return 0;
}
