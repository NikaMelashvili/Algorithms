#include <iostream>
using namespace std;

bool p = false;
int b[1000],k,a;

int main(){
	cin >> a;
	p = true;
	b[1] = 1;
	b[2] = a;
	k = 2;
	for(int i = 1; i < (a-1); i++){
		if(a % i == 0){
			k++;
			b[k] = i;
			p = false;
		}
	}
	cout << p;
}
