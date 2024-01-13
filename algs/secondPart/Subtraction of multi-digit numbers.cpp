#include <iostream>
using namespace std;

int n, m, k, c[10000], a[1000], b[1000];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        c[i] = 0;
    }
    k = n - m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        c[i] = a[i] - b[i] + c[i];
        if (c[i] < 0) {
            c[i] = c[i] + 10;
            c[i + 1] = c[i + 1] - 1;
        }
    }
    while (c[n] == 0) {
        n--;
    }
    for (int i = 0; i < k; i++) {
        cout << c[i] << " ";
    }
    return 0;
}
