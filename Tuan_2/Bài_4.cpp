#include<iostream>
using namespace std;

int main(){
	int n, m, k;
	do{
		cout << "Nhap so sinh vien duoc nhan qua: ";
		cin >> n;
	}while(n < 0);
	do{
		cout << "Nhap so hop qua: ";
		cin >> m;
	}while(m < 0);
	do{
		cout << "Nhap so tui qua co trong moi hop qua: ";
		cin >> k;
	}while(k < 0);
	if((m*k)%n == 0){
		cout << "Yes" << endl;
		cout << "Moi sinh vien nhan duoc " << m*k/n << " tui qua\n";
	}else
		cout << "No\n";
	return 0;
}