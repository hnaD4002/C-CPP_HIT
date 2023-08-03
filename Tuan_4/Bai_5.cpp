#include<iostream>
using namespace std;

int main(){
	int n, x_1 = 0, x_2 = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(a[i] == 100)
			x_1++;
		else	
			x_2++;
	}
	if(x_1 % 2 == 1)
		cout << "NO\n";
	else if(x_2 % 2 == 0)
		cout << "YES\n";
	else
		if(x_1 == 0)
			cout << "NO\n";
		else
			cout << "YES\n";
	return 0;
}