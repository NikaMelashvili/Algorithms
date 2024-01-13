#include <iostream>
using namespace std;

int n, x, a[1000], k = 0, i = -1,b[1000];

int main(){
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			k++;
			b[k] = i;
		}
		cout << a[i] << " " << k << endl;
	}
}
