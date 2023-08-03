#include<iostream>
using namespace std;

int main(){
	int n, sum =0;
	cin >> n;
	do {
		int i = i % 10;
		sum = sum * 10 + i;
		n /= 10;
	}while(n > 0);
	cout << sum << endl;
	return 0;
}