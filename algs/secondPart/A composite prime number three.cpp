#include <iostream>
#include <cmath>
using namespace std;

bool p = false;
int b[1000],k,a;

int main(){
	cin >> a;
	p = true;
	int i = 2;
	while(i <= sqrt(a)+1 && a % i != 0){
		i++;
	}
	if(a % i == 0 && i < a){
		p = false;
	}
	cout << p;
}
