#include<iostream>
#include<iomanip>

using namespace std;

class Hang{
private:
	string id, name;
	int don, soluong;
public:
	void Nhap(){
		cout << "Nhap ma hang: ";
		getline(cin, id);
		cout << "Nhap ten hang: ";
		getline(cin, name);
		cout << "nhap don gia: ";
		cin >> don;
		cout << "Nhap so luong: ";
		cin >> soluong;
	}

	void Xuat(){
		cout << left << setw(10) << id << setw(20) << name << setw(10) << don << setw(10) << soluong << endl;
	}
};

int main(){
	int n;
	cout << "Nhap so luong hang hoa: ";
	cin >> n;
	
	Hang a[n];
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		a[i].Nhap();
	}
	cout << left << setw(10) << "Ma Hang" << setw(20) << "Ten Hang" << setw(10) << "Don Gia" << setw(10) << "So Luong" << endl;
	for(int i = 0; i < n;i++){
		a[i].Xuat();
	}
}