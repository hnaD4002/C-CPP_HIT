#include<iostream>
using namespace std;

int main()
{
	int n;
	do{
		cin >> n;
	}while(n < 0);
	if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		cout << "Nam " << n << " la nam nhuan.\n";
	else
		cout << "Nam " << n << " khong la nam nhuan.\n";
	return 0;
}