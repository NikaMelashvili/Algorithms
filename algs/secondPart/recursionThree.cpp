#include <iostream>
using namespace std;

int a[1000][1000], b[1000][1000], n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    b[0][0] = a[0][0];
    for (int j = 1; j < n; j++) {
        b[0][j] = max(b[0][j - 1], a[0][j]);
    }
    for (int i = 1; i < n; i++) {
        b[i][0] = max(b[i - 1][0], a[i][0]);
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            b[i][j] = max(b[i][j - 1], b[i - 1][j]);
            b[i][j] = max(b[i][j], a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
