#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(a[i] < 0)	
			a[i] *= -1;
	}
	for(int i = 0; i < n-1; i++){
		if(a[i] > a[i + 1]){
			int temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " " ;
	}
	cout << endl;
	return 0;
}