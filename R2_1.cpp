#include <iostream>

using namespace std;

void inputArray(int &n, int a[100]){
	do{
		cout << "Nhap n = "; cin >> n;
	}while(n <= 0 || n >= 50);
	for (int i = 0; i < n; i++){
		cout << "So thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

void insertArray(int &n, int &x, int a[100]){
	n++;
	for (int i = n - 1 ; i > 0 ;i--){ //Duyet tu cuoi phan tu duyet len
		a[i] = a[i - 1]; //Phan tu sau bang phan tu trc
	}
	a[0] = x;
}

void outputArray(int n, int a[100]){
	for (int i = 0; i < n; i++){
		cout << " " << a[i];
	}	
}


int main(){
	int n, a[100];
	
	inputArray(n, a);
	
	int x;
	cout << "Cho x = "; cin >> x;
	insertArray(n, x, a);
	
	cout << "Day so:";
	outputArray(n, a);
	
	return 0;
}
