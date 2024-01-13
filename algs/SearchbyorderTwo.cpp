#include <iostream>
using namespace std;

int n, x, a[1000], i = -1;

int main(){
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	while(i <= n && a[i] != x){
		cout << a[i];
		i++;
	}
}
