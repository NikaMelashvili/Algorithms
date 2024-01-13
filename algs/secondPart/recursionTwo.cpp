#include <iostream>
using namespace std;

int s[1000],n,a[1000],x;

int main(){
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	a[0] = 1;
	s[0] = 1;
	for(int i = 0; i < n; i++){
		a[i] = a[i - 1] / x;
		s[i] = s[i - 1] + a[i];
	}
	for(int i = 0; i < n; i++){
		cout << s[i] << " ";
	}
}
