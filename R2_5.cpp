#include <iostream> 

using namespace std;

void inputArray(int &n, double a[100]){
	do {
		cout << "Nhap n = "; cin >> n;
	}while (n <= 4 || n >= 20);
	for (int i = 0; i < n ; i++){
		cout << "so[" << i + 1 << "] = ";
		cin >> a[i];
	}
}


void insertX(double x, double a[100], int &n){
	n++;  //Tang so luong phan tu trong mang
	for (int i = n - 1; i > 0; i--){ //Duyet tu vi tri cuoi cung cua mang
		a[i] = a[i - 1]; 
	}
	a[1] = x; //Gan phan tu tai vi tri 1 bang x
}

void printArray(double a[100], int &n){
	for (int i = 0; i < n; i++){
	cout  << " " << a[i] ;
	}
}

void sortArray(double a[100], int n){
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){  //Duyet qua cac phan tu con lai trong mang
			if (a[i] > a[j]){ //Sap tang dan 
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
	printArray(a, n);
	
	sortArray(a, n);
	cout << "\nDay sap xep:";
	printArray(a, n);
	
	
	return 0;
}
