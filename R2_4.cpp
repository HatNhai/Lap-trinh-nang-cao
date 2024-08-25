#include <iostream>
#include <cmath>

using namespace std;

void inputArray(int &n, int a[100]){
	do {
		cout << "Nhap n = "; cin >> n;
	}while(n <= 0 || n >= 100);
	for (int i = 0; i < n; i++){
		cout << "So thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

void insertLast(int &n, int a[100], int &x){	
	if (n < 100){ //Kiem tra kich thuoc cua mang
		a[n] = x; // Gan x bang phan tu cuoi cung cua mang
		n++; // tang so luong phan tu trong mang
	} 
}

int checkSnt(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++){
		if (x % i == 0) return 0;
	}
	return 1;
}


int demSnt(int &n, int a[100]){
	int dem = 0;
	for (int i = 0; i < n; i++){
		if (checkSnt(a[i])) 
			dem++;
	}
	return dem;
}

void outputArray(int &n, int a[100]){
	cout << "In day so:";
	for (int i = 0; i < n; i++){
		cout << " " << a[i];
	}
}

int main(){
	int n, a[100], x;
	
	inputArray(n, a);
	cout << "x = "; cin >> x;
	insertLast(n, a, x);
	outputArray(n, a);
	cout << "\nDay co " << demSnt(n, a) << " so nguyen to.";
	
	return 0;
}
