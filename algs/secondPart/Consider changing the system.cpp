#include <iostream>
using namespace std;

int k,b[10000],n,p;

int main(){
	cin >> n >> p;
	k = 0;
	while (n>=1){
		k++;
		b[k]= n % p;
		n = n / p;
	}
	for(int i = 0; i <= k; i++){
		cout << b[i] << " ";
	}
}
