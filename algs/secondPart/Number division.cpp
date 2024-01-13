#include <iostream>
using namespace std;

int s,r,b[1000],n,m;

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	s = 0;
	r = 1;
	for(int i = 0; i < n; i++){
		s = s + ((b[i] * r) % m);
		r = (r * 10) % m;
	}
	s = s % m;
	for(int i = 0; i < n; i++){
		cout << b[i] << " ";
	}
	cout << s << " " << r << " ";
}
