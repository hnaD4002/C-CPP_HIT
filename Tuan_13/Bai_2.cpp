#include<iostream>
using namespace std;

class Electronic{
protected:
	float congSuat, dienAp;
public:
	Electronic(float a, float b){
		this->congSuat = a;
		this->dienAp = b;
	}
};

class TuLanh : public Electronic{
private:
	float dungTich;
	int soNgan;
public:
	TuLanh(float a, int b, float c, float d) : Electronic(c, d){
		this->dungTich = a;
		this->soNgan = b;
	}
	void Xuat(){
		cout << "Thong Tin Tu Lanh!\n";
		cout << "Dung Tich: " << dungTich << "(lit)\tSo Ngan: " << soNgan << "\tCong Suat: " << congSuat << "\tDien Ap: " << dienAp << endl;
	}
};

class MayGiat : public Electronic{
private:
	float dungTich;
	string loai;
public:
	MayGiat(float a, string b, float c, float d) : Electronic(c, d){
		this->dungTich = a;
		this->loai = b;
	}

	void Xuat(){
		cout << "Thong Tin May Giat!\n";
		cout << "Dung Tich: " << dungTich << "(kg)\tLoai: " << loai << "\tCong Suat: " << congSuat << "\tDien Ap: " << dienAp << endl;
	}
};
int main(){
	TuLanh a(35.6, 4, 123.4, 75.5);
	MayGiat b(12.5, "Sieu To", 75.5, 220);
	a.Xuat();
	b.Xuat();
	return 0;
}