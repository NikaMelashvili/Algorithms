#include <iostream>
#include <cmath>
using namespace std;

bool p = false;
int b[1000],k,a;

int main(){
	cin >> a;
	p = true;
	for(int i = 1; i < sqrt(a) + 1; i++){
		if(a % i == 0 && i < a){
			p = false;
		}
	}
	cout << p;
}
