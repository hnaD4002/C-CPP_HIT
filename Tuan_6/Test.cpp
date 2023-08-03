#include<iostream>
#include<math.h>

using namespace std;

void NhapMang(int n, int a[]){
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}
void XuatMang(int n, int a[]){
	for(int i = 0; i < n; i++){
		cout << a[i] << "  ";
	}
}
int DemPtuDuong(int n, int a[]){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i]> 0)
			dem++;
	}
	return dem;
}

float TBC(int n, int a[]){
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return float(sum/(1.0*n));
}

void MinMax(int n, int a[]){
	int min = a[0], max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] < min) min = a[i];
		if(a[i] > max) max = a[i];
	}
	cout << "Max = " << max << endl;
	cout << "Min = " << min << endl;
}
bool ktra(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
	return true;
}
void SoNguyenTo(int n, int a[]){
	cout << " Cac so nguye to trong mang:\n";
	for(int i = 0; i < n; i++){
		if(ktra(a[i]) == true)
			cout << a[i] << "  ";
	}
}
void Xoa_2(int n, int a[]){
	for(int i = n-1; i < 2; i--){
		a[i] = a[i-1];
	}
}

void menu(int n, int a[]){

	cout << "-------BTVN Buoi 6 HIT--------\n";
	int lc;
	// Cac lua chon
	cout << "0: Thoat chuong trinh!\n";
	cout << "1: Nhap n va n phan tu.\n";
	cout << "2: In mang vua nhap.\n";
	cout << "3: So luong phan tu duong cua mang.\n";
	cout << "4: Trung binh cong cua mang.\n";
	cout << "5: Tim Min, Max cua mang.\n";
	cout << "6: So nguyen to.\n";
	cout << "7: Xoa phan tu thu 2 trong mang.\n";
	cout << "________________________________\n";
	while(true){
		cout << "Nhap lua chon: "; cin >> lc;
		switch (lc)
		{
		case 1:
			cin >> n;
			NhapMang(n, a);
			continue;
		case 2:
			XuatMang(n, a);
			cout << endl;
			continue;
		case 3:
			cout << "So phan tu duong trong mang la: " << DemPtuDuong(n, a) << endl;
			continue;
		case 4: 
			cout << "Trung binh cong cua mang la: " << TBC(n, a) << endl;
			continue;
		case 5:
			MinMax(n, a);
			cout << endl;
			continue;
		case 6:
			SoNguyenTo(n, a);
			cout << endl;
			continue;
		case 7: 
			Xoa_2(n, a);
			cout << endl;
			continue;
		case 0: 
			cout << "Thoat chuong trinh!\n";
			break;
		default:
			continue;
		}
	}

}
int main(){
	int n, a[n];
	menu(n, a);
	return 0;
}