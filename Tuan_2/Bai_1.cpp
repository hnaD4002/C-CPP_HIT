#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	switch(n){
		case 19:
			cout << "Nam nhat\n";
			break;
		case 20:
			cout << "Nam 2\n";
			break;
		case 21:
			cout << "Nam 3\n";
			break;
		case 22:
			cout << "Nam cuoi\n";
			break;
		default:
			cout << "Khong xac dinh\n";
	}
	return 0;
}