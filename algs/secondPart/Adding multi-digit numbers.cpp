#include <iostream>
using namespace std;

int n,m,k,c[10000],a[10000],b[10000];

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	if(n > m){
		k = n;
	} else{
		k = m;
	}
	k++;
	for(int i = 0; i < k; i++){
		c[i] = 0;
	}
	for(int i = 0; i < k; i++){
		c[i] = a[i] + b[i] + c[i];
		if(c[i] >= 10){
			c[i + 1] = c[i + 1]+1;
			c[i] = c[i] % 10;
		}
	}
	if(c[k] == 0){
		k--;
	}
	for(int i = 0; i < n; i++){
		cout << c[i] << " ";
	}
}
