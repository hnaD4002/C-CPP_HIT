#include<iostream>
#include<iomanip>

using namespace std;

class NSX{
private:
	string id, ten, dc;
public:
	void Nhap(){
		cout << "Nhap Ma Nam San Xuat: ";
		getline(cin, id);
		cout << "Nhap Ten Nam San Xuat: ";
		getline(cin, ten);
		cout << "Nhap Dia Chi Nam San Xuat: ";
		getline(cin, dc);
	}

	void Xuat(){
		cout << "Ma NSX: " << id << endl;
		cout << "Ten NSX: " << ten << endl;
		cout << "Dia Chi NSX: " << dc << endl;
	}
};

class Hang{
private:
	string id, name;
	NSX x;
public:
	void Nhap(){
		cout << "Nhap ma hang: ";	getline(cin, id);
		cout << "Nhap ten hang: ";	getline(cin, name);
		x.Nhap();
	}	
	void Xuat(){
		cout << "Ma Hang: " << id << endl;
		cout << "Ten Hang: " << name << endl;
		x.Xuat();
	}
};

int main(){
	Hang a;
	a.Nhap();
	a.Xuat();
	return 0;
}