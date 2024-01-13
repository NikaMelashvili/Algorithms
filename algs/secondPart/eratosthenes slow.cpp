#include <iostream>
using namespace std;

int b[1000],a,k,d;

int main(){
	cin >> a;
	k = 0;
	d = 2;
	int i = 0;
	while(a > 1){
		if(a % d == 0){
			k++;
			b[k]=d;
			a= a% d;
			
		}
		else{
			if(d == 2)
			{
				d = d+1;
			} 
			else{
				d = d +2;
			}
		}
		cout << b[i] << " ";
		i++;
	}
}
