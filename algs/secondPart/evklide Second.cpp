#include <iostream>
using namespace std;

int a, b, usg, usj, c, d; 

int main()
{
	cin >> a >> b;
	c = a;
	d = b;
	while (a != 0 && b != 0){
		if (a > b){
			a = a % b;
			cout <<"a " << a << endl;
		} else{
			b = b % a;	
			cout <<"b " << b << endl;
		} 
	}	
	usg = a + b;
	usj = (c * d) / usg;
	cout << "USG = "<< usg << endl;
	cout << "USJ = "<< usj << endl;
}
