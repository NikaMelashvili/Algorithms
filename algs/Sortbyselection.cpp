#include <iostream>
using namespace std;

int k,a[1000],m,n;

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n - 1; i++){
		k = i;
		m = a[i];
		for(int j = i + 1; j < n; j++){
			if(a[j] > m){
				m = a[j];
				k = j;
			}
		}
		a[k] = a[i];
		a[i] = m;
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}



