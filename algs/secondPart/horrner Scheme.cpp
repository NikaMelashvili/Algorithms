#include <iostream>
using namespace std;

int a, b[10000],n;

int main(){
	cin >> n;
	for ( int i = 0; i < n; i++){
		cin >> b[i];
	}
	a = 0;
	for(int i = 0; i < n; i++){
		a = a * 10 + b[i];
	}
	cout << a << " ";	
}
