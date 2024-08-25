#include <iostream> 
#include <cmath>

using namespace std;

void inputArray(int &n, int a[100]){
	do {
		cout << "N = "; cin >> n;
	}while(n <= 0 || n >= 20);
	for (int i = 0; i < n; i++){
		cout << "So thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

void outputArray(int &n, int a[100]){
	cout << "In day so:";
	for (int i = 0; i < n; i++){
		cout << " " << a[i];	
	} 
}

int soChinhPhuong(int &n, int a[100]){
	int max = a[0];
	for (int i = 0; i < n; i++){
		if (sqrt(a[i]) * sqrt(a[i]) == a[i] && a[i] > max) max = a[i];
	}
	return max;
}

int main(){
	
	int n;
	int a[100];
	
	inputArray(n, a);
	outputArray(n, a);
	cout << "\nSo chinh phuong lon nhat: " << soChinhPhuong(n, a);
	
	return 0;
} 
