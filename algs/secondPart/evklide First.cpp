#include <iostream>
using namespace std;

// evklides algoritms aqvs sami wesi:
// 1) usg(a,b) = usg (a-b, b) damtkiceba: a = kx , b = lx aqedan 
// a-b = (k-l)x anu x warmoadgens a-b da b saerto gamyofsac
// 2) usg(a,a) = a
// 3) usg(a,0) = a

int a,b,usg,usj,c,d;

int main(){
	cin >> a >> b;
	c = a;
	d = b;
	while (a != b){
		if(a > b){
			a = a - b;
			cout << a << endl;
		}
		else{
			b = b - a;
			cout << b << endl;
		}
	}
	usg = a;
	usj = (c * d) / usg;
	cout << "USG = " << usg << endl;
	cout << "USJ = " << usj << endl;
}
