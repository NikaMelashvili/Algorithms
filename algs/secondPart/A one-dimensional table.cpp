#include <iostream>
using namespace std;

int p[1000],n,a[1000];

int main(){
	cin >> n;
	p[0] = 1;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 1; i < n; i++){
		p[i] = p[i - 1] * a[i];
	}
	for(int i = 0; i < n; i++){
		cout << p[i] << " ";
	}
}
