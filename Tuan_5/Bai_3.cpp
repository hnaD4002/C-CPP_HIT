#include<iostream>
using namespace std;

int main(){
	string a;
	int dem = 0;
	getline(cin, a);
	for(int i = 0; i < a.length(); i++){
		if(a[i] == ' ' && a[i+1] != ' ')
			dem++;
	}
	if(a[0] != ' ')
		dem++;
	cout << dem << endl;
	return 0;
}