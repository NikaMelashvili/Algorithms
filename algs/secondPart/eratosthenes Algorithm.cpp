#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int b[1000];
    for (int i = 0; i < n; i++) {
        b[i] = i + 1;
    }

    for (int i = 2; i <= n; i++) {
        if (b[i - 1] != 0) {
            for (int j = i * 2; j <= n; j += i) {
                b[j - 1] = 0;
            }
        }
    }

    cout << "Prime numbers up to " << n << ": ";
    for (int i = 1; i < n; i++) {
        if (b[i] != 0) {
            cout << b[i] << " ";
        }
    }

    return 0;
}

