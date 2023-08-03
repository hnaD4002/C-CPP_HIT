#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int max = a[0], min = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max)
			max = a[i];
		if(a[i] < min)
			min = a[i];
	}
	int x = max - min;
	cout << x << endl;
	n++;
	for(int i = n - 1; i > 0; i--){
		a[i] = a[i-1];
	}
	a[0] = x;
	for(int i = 0; i < n; i++){

		cout << a[i] << " ";
	}
	return 0;
}