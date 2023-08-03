#include<iostream>
using namespace std;

int main(){
	int n ;
	do{
		cin >> n;
	}while(n < 0);
	float hh;
	if(n <= 200)
		hh = n * 0.1;
	else if(n <= 500)
		hh = n * 0.15;
	else
		hh = n * 0.25;
	cout << "Tien hoa hong la: " << hh << " Trieu Dong\n";
	return 0;
}