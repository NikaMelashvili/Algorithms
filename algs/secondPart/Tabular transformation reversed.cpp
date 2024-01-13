#include <iostream>
using namespace std;

int k,b[10000],n;

int main(){
	cin >> n;
	k = 0;
	while(n>=1){
		k++;
		b[k] = n % 10;
		n = n / 10;
	}
	for(int i = 1; i <= 5; i++){
		cout << b[i] << " ";
	}
}
