#include<iostream>
using namespace std;
void Nhap_n(int &n){
	do{
		cout << "Nhap n: ";
		cin >> n;
	}while(n < 0 || n > 50);
}

void Nhap_Mang(int n, int *&a){
	a = new int[n];
	for(int i = 0; i < n; i++){
		cin >> *(a+i);
	}
	cout << endl;
}
void Xuat_Mang(int n, int *a){
	for(int i = 0; i < n; i++){
		cout << *(a+i) << "  ";
	}
	cout << endl;
}
void Chen_Mang(int &n, int *&a){
	int x, k;
	cout << "Nhap x: ";cin >> x;
	do{
		cout << "Nhap vi tri can chen: ";
		cin >> k;
	}while(k < 0 || k > n);
	n++;
	for(int i = n-1; i > k; i--){
		*(a+i)= *(a+i-1);
	}
	*(a+k) = x;
	cout << endl;
	Xuat_Mang(n, a);
}

void swap(int &a, int &b){
	if(a > b){
		int temp = a;
		a = b; 
		b = temp;
	}
}
void Sap_Xep(int n, int *a){
	for(int i = 0; i < n-1; i++){
		swap(*(a+i), *(a+i+1));
	}
	Xuat_Mang(n, a);
}
void menu(int n, int *a){
	cout << "-------- BTVN Tuan 7 HIT ------------\n";
	cout << "1: Nhap n \n";
	cout << "2: Nhap mang a. \n";
	cout << "3: Xuat mang \n";
	cout << "4: Chen Mang \n";
	cout << "5: Sap Xep \n";
	cout << "0: Thoat chuong trinh!\n";
	cout << "-------------------------------------\n";
	int lc;
	while(true){
		cout << "Nhap lua chon: ";
		cin >> lc;
		switch (lc)
		{
		case 1:
			Nhap_n(n);
			continue;
		case 2:
			Nhap_Mang(n, a);
			continue;
		case 3:
			Xuat_Mang(n, a);
			continue;
		case 4:
			Chen_Mang(n, a);
			continue;
		case 5:
			Sap_Xep(n, a);
			continue;
		case 0:
			cout << "Thoat Chuong Trinh!!!\n";
			break;
		default:
			cout << "vui long nhap lai!\n";
			continue;
		}
		break;
	}

}
int main(){
	int n;
	int *a = nullptr;
	menu(n, a);
	delete a;
	return 0;
}