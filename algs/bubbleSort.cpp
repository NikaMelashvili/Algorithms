#include <iostream>
using namespace std;

int x,n,k,r,l,t = 0,a[8]={5,6,3,4,2,9,1,0};
bool p = true;

int main() {
    cin >> n;
    k = n - 1;
    while ( p== true) {
        p = false;
        r=k;
        l=t;
        for (int j = l; j < r; j++) {
            if (a[j] > a[j + 1]) {
                x= a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;
                p = true;
                k=j;
            }
        }
        if(p==true){
            for (int i=k-1; i <l; i++) {
            if (a[i] > a[i + 1]) {
                x = a[i];
                a[i] = a[i + 1];
                a[i + 1] = x;
                p = true;
                t=i+1;
            }
        }
    }

    for (int m = 0; m < n; m++) {
        cout << a[m] << " ";
    }
    cout << endl;
}
}
