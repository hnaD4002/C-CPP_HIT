#include<iostream>
#include<string.h>


using namespace std;

int main(){
	string a, b;
	getline(cin, a);
	getline(cin, b);
	if(a.length() != b.length()){
		cout << "NO\n";
		return 0;
	}
	for(int i = 0; i < a.length(); i++){
		if(a[i] >= 'A' && a[i] <= 'Z')
			a[i] += + 32;
		if(b[i] >= 'A' && b[i] <= 'Z')
			b[i] += 32;
	}
	if(a == b)
		cout << "YES\n";
	else	
		cout << "YES\n";
	return 0;
}