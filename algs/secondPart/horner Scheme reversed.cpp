#include <iostream>
using namespace std;

int a, b[10000],n,r;

int main(){
	cin >> n;
	for ( int i = 0; i < n; i++){
		cin >> b[i];
	}
	a = 0;
	r = 1;
	for(int i = 0; i < n; i++){
		a = a + b[i] * r;
		r = r * 10;
	}
	cout << a << " ";	
}
