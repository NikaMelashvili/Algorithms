#include <iostream>
using namespace std;

int m, a[1000], k, n;

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	m = a[0];
	k = 0;
	for(int i = 1; i < n; i++){
		if(a[i] > m){
			m = a[i];
			k = i;
		}
	}
	cout << m << " " << k;
}
