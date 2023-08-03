#include<iostream>

using namespace std;

class HinhChuNhat
{
private:
	int dai, rong;		
public:
	HinhChuNhat(){}
	~HinhChuNhat(){}
	void Nhap(){
		cout << "Nhap Chieu Dai: ";cin >> dai;
		cout << "Nhap Chieu Rong: "; cin >> rong;
	}
	void Ve(){
		char a[rong][dai];
		for(int i = 0; i < rong; i++){
			for(int j = 0; j < dai; j++){
				if(i == 0 || j == 0 || i == rong-1 || j == dai-1)
					a[i][j] = '*';
				else	
					a[i][j] = ' ';
			}
		}
		for(int i = 0; i < rong; i++){
			for(int j = 0; j < dai; j++){
				cout << a[i][j];
			}
			cout << endl;
		}
	}
	float DIENTICH(){
		return dai*rong;
	}
	float CHUVI(){
		return (dai+rong)*2.0;
	}
};

int main(){
	HinhChuNhat a;
	a.Nhap();
	a.Ve();
	cout << "Dien Tich = " << a.DIENTICH();
	cout << "Chu Vi" << a.CHUVI();
	return 0;
}