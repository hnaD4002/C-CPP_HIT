#include<iostream>
#include<iomanip>

using namespace std;

class Hang{
private:
	string id, name;
	int don, soluong;
public:
	Hang(){}
	Hang(string a, string b, int c, int d){
		this->id = a;
		this->name = b;
		this->don = c;
		this->soluong = d;
	}

	void Nhap(){
		cout << "Nhap Ma Hang: ";
		getline(cin, id);
		cout << "Nhap Ten Hang: ";
		getline(cin, name);
		cout << "Nhap DOn Gia: ";
		cin >> don;
		cout << "Nhap So Luong: ";
		cin >> soluong;
	}
	void Xuat(){
		cout << left << setw(10) << id << setw(20) << name << setw(10) << don << setw(10) << soluong << setw(10) << don*soluong << endl;
	}
};

int main(){

	Hang a[100];
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "\nNhap Thong Tin Hang Hoa Thu " << i + 1 << endl;
		cin.ignore();
		a[i].Nhap();
	}
	cout << left << setw(10) << "Ma Hang" << setw(20) << "Ten Hang" << setw(10) << "Don Gia" << setw(10) << "So Luong" << setw(10) << "Thanh Tien" << endl;
	for (int i = 0; i < n; i++)
	{
		a[i].Xuat();
	}
	return 0;
}