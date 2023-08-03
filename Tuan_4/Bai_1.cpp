#include<iostream>
using namespace std;

int main(){
	int n, sum_k = 0, sum_d = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if( a[i] % 2 == 0)	
			sum_d += a[i];
		else
			sum_k += a[i];
	}
	if(sum_d > sum_k)
		cout << "Da\n";
	else	
		cout << "Keo\n";
	return 0;
}