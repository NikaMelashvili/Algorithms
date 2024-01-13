#include <iostream>
using namespace std;

int a[1000],n,x;

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-1; j++){
			if(a[j] < a[j + 1]){
				x = a[j];
				a[j] = a[j+1];
				a[j+1] = x;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
