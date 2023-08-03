#include<iostream>

using namespace std;

#define ll long long

ll GiaiThua(ll n){
	if(n == 1 || n == 0)
		return 1;
	return n * GiaiThua(n-1);
}
ll mu(ll a, ll b){
	ll sum = 1;
	for(ll i = 0; i < b; i++){
		sum *= a;
	}
	return sum;
}
int main(){
	ll x, n;
	double S = 0.0; 
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	for(int i = 0; i <= 2*n; i += 2){
		S += double(mu(x, i)/GiaiThua(i));
	}
	cout << "S(n) = " << S << endl;
	return 0;
}