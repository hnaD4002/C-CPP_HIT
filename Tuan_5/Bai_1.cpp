#include<iostream>
using namespace std;

int main(){
	string a;
	getline(cin, a);
	char x;
	int dem = 0;
	cin >> x;
	for (int i = 0; i < a.length(); i++)
	{
		if(x == a[i])
			dem++;
	}
	cout << dem << endl;
	return 0;
}