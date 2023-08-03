#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int max = a[0], min = a[0];
	int pos_max, pos_min;
	for(int i = 0; i < n; i ++){
		if(a[i] >= max){
			max = a[i];
			pos_max = i;
		}
		if(a[i] <= min){
			min = a[i];
			pos_min = i;
		}
	}
	int temp = a[pos_max];
	a[pos_max] = a[pos_min];
	a[pos_min] = temp;
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
}