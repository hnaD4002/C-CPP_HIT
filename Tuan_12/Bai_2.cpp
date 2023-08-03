#include<iostream>

using namespace std;


class ARRAY{
private:
	int *Value;
	int n;
public:
	ARRAY(){
		n = 0;
	}
	ARRAY(int *a, int b){
		this->Value = a;
		this->n = b;
	}
	~ARRAY(){
		delete[] Value;
		n = 0;
	}
	void Nhap(){
		cout << "Nhap n: ";
		cin >> n;
		Value = new int[n];
		for(int i = 0; i < n; i++){
			cin >> Value[i] ;
		}
	}
	void Xuat(){
		for(int i = 0; i < n; i++){
			cout << Value[i] << "  ";
		}
		cout << endl;
	}
};

int main(){
	ARRAY a;
	a.Nhap();
	a.Xuat();
	return 0;
}