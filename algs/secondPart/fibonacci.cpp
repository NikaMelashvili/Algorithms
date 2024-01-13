#include <iostream>
using namespace std;

int f[1000],n;

int main(){
	cin >> n;
	f[0] = 1;
	f[1] = 1;
	for (int i = 2; i < n; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
	for(int i = 0; i < n; i++){
		cout << f[i] << " ";
	}
}
