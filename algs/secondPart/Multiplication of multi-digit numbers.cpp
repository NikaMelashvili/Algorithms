#include <iostream>
using namespace std;

int n, m, k, c[10000], a[10000], b[10000];

int main() {
    cin >> n >> m;
    for (int i = n - 1; i >= 0; i--) {
        cin >> a[i];
    }
    for (int i = m - 1; i >= 0; i--) {
        cin >> b[i];
    }
    k = n + m;
    int t = k;

    for (int i = 0; i < k; i++){
        c[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i + j - 1] = a[j] * b[i] + c[i + j - 1];
        }
    }
    for (int i = 0; i < k-1; i++)
    {
        c[i + 1] = c[i + 1] + c[i] / 10;
        c[i] = c[i] % 10;
    }
    while (c[k] == 0)
    {
        k--;
    }

    for (int i = k + 1; i >= 0; i--)
    {
        cout << c[i - 1] << " ";
    }
}
