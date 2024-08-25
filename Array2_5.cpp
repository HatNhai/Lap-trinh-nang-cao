#include <iostream>
#include <cmath>

using namespace std;

void inputArr(int &n, int a[100][100]){
	do {
		cout << "Nhap n = ";cin >> n;
	}while (n <= 2 || n >= 10);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << "A[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

void outputArr(int n, int a[100][100]){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << " " << a[i][j];
		if (j < n - 1) cout << "";
		}
	if (i < n - 1) cout << endl;
	}
}

int demScp(int n, int a[100][100]){
	int dem = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (sqrt(a[i][j]) * sqrt(a[i][j]) == a[i][j]) dem++;
		}
	}
	return dem;
}

int demScpChan(int n, int a[100][100]){
	int dem = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (sqrt(a[i][j]) * sqrt(a[i][j]) == a[i][j] && a[i][j] % 2 == 0) dem++;
		}
	}
	return dem;
}

int main(){
	int n, a[100][100];
	
	inputArr(n, a);
	cout << "Ma tran A:" << endl;
	outputArr(n, a);
	cout << "\nCo " << demScp(n, a) << " so chinh phuong.";
	cout << "\nCo " << demScpChan(n, a) << " so chinh phuong chan!";
	
	
	
	
	return 0;
}
