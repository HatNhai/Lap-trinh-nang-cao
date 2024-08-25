#include <iostream>
#include <cmath>

using namespace std;

void inputArray(int &n, int a[100]){
	do {
		cout << "Nhap n = "; cin >> n;
	}while (n <= 0 || n >= 20);
	for (int i = 0; i < n; i++){
		cout << "So thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

void outputArray(int n, int a[100]){
	cout << "Dao nguoc day so:";
	for(int i = n - 1; i >= 0; i--){
		cout <<  " " << a[i];
	}
}

int soChinhPhuong(int &n, int a[100]){
	int dem = 0;
	int tong = 0;
	for (int i = 0; i < n; i++){
		if (sqrt(a[i]) * sqrt(a[i]) == a[i]){
		dem++;
		tong += a[i];
		}
	}
	cout << "\nDay co " << dem << " so chinh phuong." << endl;
	cout << "Tong cac so chinh phuong S = " << tong;
	return 0;
}

int main(){
	int n, a[100];
	
	inputArray(n, a);
	outputArray(n, a);
	soChinhPhuong(n, a);
	return 0;
}
