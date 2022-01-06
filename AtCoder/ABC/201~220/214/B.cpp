#include <bits/stdc++.h>
using namespace std;

int main() {
    int S, T;
    cin >> S >> T;

    int cnt = 0;
    for (int i = 0; i < 110; i++) {
        for (int j = 0; j < 110; j++) {
            for (int k = 0; k < 110; k++) {
                if (i + j + k <= S && i * j * k <= T) cnt++;
            }
        }
    }
    cout << cnt << endl;
}