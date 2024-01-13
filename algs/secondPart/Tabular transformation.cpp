#include <iostream>
using namespace std;

int k,b[10000],l,m,n;

int main(){
	cin >> n;
	k = 0;
	l = n;
	while(l >= 1){
		l = l / 10;
		k++;
	}
	m = k;
	while(n>=1){
		b[k] = n % 10;
		n = n / 10;
		k--;
	}
	for(int i = 1; i <= 5; i++){
		cout << b[i] << " ";
	}
}
