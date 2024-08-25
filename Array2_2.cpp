#include <iostream>

using namespace std;

void inputArray(int &n, int a[100][100]){
	do{
		cout << "Nhap n = "; cin >> n;
	}while(n <= 0 || n >= 10);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << "A[" << i << "][" << j <<"] = ";
			cin >> a[i][j];
		}
	}
}

void outputArray(int n, int a[100][100]){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << " " << a[i][j];
		if (j < n - 1) cout << ""; //hang ngang 
	}
		if (i < n - 1) cout << endl; //hang doc
	} 
}

int soChia3(int &n, int a[100][100]){ 
	int dem = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (a[i][j] % 3 == 0) dem++;
		}
	}
	return dem;
}

int main(){
	int n;
	int a[100][100];
	
	inputArray(n, a);
	cout << "Ma tran A:" << endl;
	outputArray(n, a);
	cout << "\nSo chia het cho 3: " << soChia3(n, a);
	
	
	return 0;
}
