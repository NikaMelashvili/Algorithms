#include <iostream>
using namespace std;

bool P = false;
int n, x, a[1000], k = 0;

int main(){
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0;i < n; i++){
		if(a[i] == x){
			P = true;
			k = i;
			cout << a[i] << " " << k << endl;
		}
	}
}
