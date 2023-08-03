#include<iostream>
#include<iomanip>

using namespace std;

class Date{
private:
	int d, m, y;
public:
	void Nhap(){
		cout << "Nhap ngay thang nam: ";
		cin >> d >> m >> y;
	}
	void Xuat(){
		cout << d << "/" << m << "/" << y << endl;
	}
};

class NhanSu{
private:
	string id, name;
	Date NS;
public:
	void Nhap(){
		cout << "Nhap ma nhan su: ";
		getline(cin, id);
		cout << "Nhap Ho Ten: ";
		getline(cin, name);
		NS.Nhap();
	}
	void Xuat(){
		cout << "Ma nhan su: " << id << endl;
		cout << "Ho ten: " << name << endl;
		NS.Xuat();
	}
};
int main(){
	NhanSu x;
	x.Nhap();
	x.Xuat();
	return 0;
}