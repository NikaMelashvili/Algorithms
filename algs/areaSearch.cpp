#include <iostream>
using namespace std;

int l = 0,r,n,a[1000],x,m;
bool p = false;

int main(){
	cin >> n >> x;
	r = n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	while(l <= r && p == false){
		m = (r+l) / 2;
		if(a[m] == x){
			p = true;
		} else{
			if(a[m]>x){
				l = m+1;
			}
			else{
				r=m-1;
			}
		}
	}
	cout << p;
}
