#include <iostream>
using namespace std;

int n, x, a[1000], i = -1;

int main(){
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	a[n + 1] = x;
	while(a[i] != x){
		i++;
		cout << a[i];
	}
}
