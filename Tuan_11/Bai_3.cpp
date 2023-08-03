#include<iostream>


using namespace std;

class Hang{
private:
	string id, name;
	int don;
public:
	void Nhap(){
		cout << "Nhap Ma Hang: ";	getline(cin, id);
		cout << "Nhap Ten Hang: ";	getline(cin, name);
		cout << "Nhap Don Gia: ";	cin >> don;
	}

	void Xuat(){
		cout << "Ma Hang: " << id << endl;
		cout << "Ten Hang: " << name << endl;
		cout << "Don Gia: " << don << endl;
	}
};


class Phieu{
private:
	string idP;
	Hang x[100];
	int n;
public:
	void Nhap(){
		cout << "Nhap Ma Phieu: ";	getline(cin, idP);
		cout << "Nhap n: ";	cin >> n;
		cout << "Nhap Thong Tin Hang Hoa!!\n";
		for(int i = 0; i < n; i++){
			cin.ignore();
			x[i].Nhap();
		}
	}
	void Xuat(){
		cout << "Ma Phieu: " << idP << endl;
		cout << "Thong tin hang hoa!\n";
		for(int i = 0; i < n; i++){
			x[i].Xuat();
		}
	}
};

int main(){
	Phieu a;
	a.Nhap();
	a.Xuat();

	return 0;
}