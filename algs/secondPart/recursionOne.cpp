#include <iostream>
using namespace std;

int s[1000],n,a[1000];

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	s[0] = 0;
	for(int i = 0; i < n; i++){
		s[i] = s[i - 1] + a[i];
	}
	for(int i = 0; i < n; i++){
		cout << s[i] << " ";
	}
}
