#include<iostream>

using namespace std;


class Printer{
protected:
	float trongLuong;
	string hangSX, namSX;
	float tocDo;
};

class LaserPtinter : public Printer{
private:
	float doPhanGiai;
public:
	void Nhap(){
		cout << "Nhap Hang SX: ";
		getline(cin, hangSX);
		cout << "Nam SX: ";
		getline(cin, namSX);
		cout << "Nhap Toc Do(so trang/ phut): ";
		cin >> tocDo;
		cout << "Nhap Trong Luong: ";
		cin >> trongLuong;
		cout << "Nhap Do Phan Giai: ";
		cin >> doPhanGiai;
	}
	void Xuat(){
		cout << "Hang SX: " << hangSX << "\tNam SX: " << namSX << "\tToc Do: " << tocDo << "(trang/phut)\tTrong Luong: " << trongLuong << "\tDo Phan Giai: " << doPhanGiai << endl;
	}
};

class DotPrinter : public Printer{
private:
	float matDoKim;
public:
	void Nhap(){
		cout << "Nhap Hang SX: ";
		getline(cin, hangSX);
		cout << "Nam SX: ";
		getline(cin, namSX);
		cout << "Nhap Toc Do(so trang/ phut): ";
		cin >> tocDo;
		cout << "Nhap Trong Luong: ";
		cin >> trongLuong;
		cout << "Nhap Mat Do Kim: ";
		cin >> matDoKim;
	}
	void Xuat(){
		cout << "Hang SX: " << hangSX << "\tNam SX: " << namSX << "\tToc Do: " << tocDo << "(trang/phut)\tTrong Luong: " << trongLuong << "\tMat Do Kim: " << matDoKim << endl;
	}
};
int main(){
	LaserPtinter a[100];
	int n;
	DotPrinter b;
	cin >> n;
	cout << "Nhap Thong Tin LaserPrinter!\n";
	for(int i = 0; i < n; i++){
		cin.ignore();
		a[i].Nhap();
	}
	cout << "Nhap Thong Tin DotPrinter!\n";
	b.Nhap();

	cout << "--------------------------------------------\n";
	cout << "Thong Tin May LaserPrinter!\n";
	for(int i = 0; i < n; i++){
		a[i].Xuat();
	}
	cout << "\nThong Tin May DotPrinter!\n";
	b.Xuat();
	return 0;
}