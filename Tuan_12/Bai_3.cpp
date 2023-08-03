#include<iostream>
#include<iomanip>

using namespace std;
#define max 100

class TaiSan{
private:
	string name, tinhtrang;
	int soluong;
public:
	TaiSan(){}
	TaiSan(string a, int b, string c){
		this->name = a;
		this->soluong = b;
		this->tinhtrang = c;
	}
	void Nhap(){
		cout << "Nhap ten tai san: ";	getline(cin, name);
		cout << "Nhap so luong: ";	cin >> soluong;
		cout << "Nhap tinh trang: ";	getline(cin, tinhtrang);
	}

	void Xuat(){
		cout << left << setw(30) << name << setw(10) << soluong << setw(30) << tinhtrang << endl;
	}
	int getSoLuong(){
		return soluong;
	}
};


class Phieu{
private:
	string id, date, NhanVien, chucVu, Phong, idPhong, tPhong;
	TaiSan TS[max];
	int n;
public:
	Phieu(){}
	Phieu(string a, string b, string c, string d, string e, string f, string g, TaiSan m[], int y){
		this->id = a;
		this->date = b;
		this->NhanVien = c; 
		this->chucVu = d; 
		this->Phong = e;
		this->idPhong = f;
		this->tPhong = g;
		this->n = y;
		for(int i = 0; i < y; i ++){
			TS[i] = m[i];
		}
	}

	void Nhap(){
		cout <<"Nhap Ma Phieu: " ;	getline(cin, id);
		cout << "Nhap Ngay Ke Kiem: ";
		getline(cin, date);
		cout << "Nhap Nhan Vien kiem ke: ";
		getline(cin, NhanVien);
		cout << "Nhap Chuc Vu: ";
		getline(cin, chucVu);
		cout << "Nhap Phong Kiem Ke: ";
		getline(cin, Phong);
		cout << "Nhap Ma Phong: ";
		getline(cin, idPhong);
		cout << "Nhap Ten Truong Phong: ";
		getline(cin, tPhong);
		cout << "Nhap So Luong Tai San: ";
		cin >> n;
		for(int i = 0; i < n; i++){
			cin.ignore();
			cout << "Tai San " << i +1 << endl;
			TS[i].Nhap();
		}
	}

	void Xuat(){
		int sum = 0;
		cout << "\t\t\t\tPHIEU KIEM KE TAI SAN\n\n";
		cout << left << setw(17) << "Ma Phieu: " << setw(30) << id << setw(15) << "Ngay kiem ke: " << setw(20) << date << endl;
		cout << left << setw(17) << "Nhan vien kiem ke:  " << setw(30) << NhanVien << setw(15) << "Chuc vu: " << setw(20) << chucVu << endl;
		cout << left << setw(17) << "Kiem ke tai phong: " << setw(30) << Phong << setw(15) << "Ma phong: " << setw(20) << idPhong << endl; 
		cout << left << setw(17) << "Truong Phong: " << setw(30) << tPhong << endl << endl;
		cout << left << setw(30) << "Ten Tai San" << setw(10) << "So Luong" << setw(30) << "Tinh Trang" << endl;
		for(int i = 0; i < n; i++){
			TS[i].Xuat();
			sum += TS[i].getSoLuong();
		} 
		cout << endl;
		cout << "So tai san da kiem ke: " << n << "\t\t Tong so kuong: " << sum << endl;
	}

}; 
int main(){

	return 0;
}