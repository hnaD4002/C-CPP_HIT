#include<iostream>
using namespace std;

int main(){
	float muc_luong, gio, tien_thg, tien_phat;
	cin >> muc_luong >> gio >> tien_thg >> tien_phat;
	cout << "Thuc linh = " << gio*muc_luong + tien_thg - tien_phat << endl;
	return 0;
}