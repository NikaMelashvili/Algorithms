#include <iostream>
using namespace std;

int r, l, a[1000], m, k, x, n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        r = i;
        l = 0;
        while (l < r) {
            m = (l + r) / 2;
            if (a[m] > a[i]) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        k = r;
        x = a[i];
        for (int j = i; j > k; j--) {
            a[j] = a[j - 1];
        }
        a[k] = x;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

