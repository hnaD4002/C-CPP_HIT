#include<iostream>
#include<iomanip>

using namespace std;

class HangHoa{
private:
	string name;
	int soLuong;
	double donGia;
public:
	void Nhap(){
		cout << "Nhap ten hang: ";
		getline(cin, name);
		cout << "Nhap don gia: ";
		cin >> donGia;
		cout << "Nhap so luong: ";
		cin >> soLuong;
	}
	void Xuat(){
		cout << left << setw(30) << name << setw(30) << donGia << setw(30) << soLuong << setw(30) << donGia*soLuong << endl;
	}
	double getTien(double donGia, int soLuong){
		return donGia*soLuong;
	}
	int getSoLuong(){
		return soLuong;
	}
	double getDonGia(){
		return donGia;
	}
};
class Phieu{
private:
	string maPhieu, ngayLap;
	HangHoa a[100];
	int n;
public:
	void Nhap(){
		cout << "Nhap ma phieu: ";
		getline(cin, maPhieu);
		cout << "Nhap ngay lap: ";
		getline(cin, ngayLap);
		cout << "Nhap so luong hang hoa: ";
		cin >> n;
		for(int i = 0; i < n; i++){
			cin.ignore();
			a[i].Nhap();
		}
	}
	void Xuat(){
		cout << setw(50) << "PHIEU MUA HANG\n";
		cout << left << setw(10) << "Ma phieu: " << setw(50) << maPhieu << setw(10) << "Ngay lap: " << ngayLap << endl;
		cout << left << setw(30) << "Ten hang" << setw(30) << "Don gia" << setw(30) << "So luong" << setw(30) << "Thanh tien" << endl;
		double tien = 0;
		for(int i = 0; i < n; i++){
			a[i].Xuat();
			tien += a[i].getTien(a[i].getDonGia(), a[i].getSoLuong());
		}
		cout << right << setw(30) << "Cong thanh tien: " << tien << endl;
		}
};
int main(){
	Phieu a;
	a.Nhap();
	a.Xuat();
	return 0;
}