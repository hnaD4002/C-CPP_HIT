#include<iostream>
using namespace std;

int main(){
	string a, b;
	getline(cin, a);
	getline(cin, b);
	int leng = b.length();
	int pos = a.find(b);
	int i = 0;
	while(pos < a.length()){
		a.erase(pos, leng);
		pos = a.find(b);
	}
	while(a[i] == ' '){
		a.erase(i, 1);
	}
	i = a.length();
	while(a[i] == ' '){
		a.erase(i-1, 1);
		i--;
	}
	for(int i = 0; i < a.length; i++){
		while(a[i] == a[i+1] && a[i] == ' ')
			a.erase(i, 1);
	}
	cout << a << endl; 
	return 0;
}