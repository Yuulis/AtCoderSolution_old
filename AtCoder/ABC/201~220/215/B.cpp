#include <bits/stdc++.h>
using namespace std;

using LL = long long;
#define INF 1e+9;

int main() {
    LL N;
    cin >> N;

    LL sum = 1;
    for (int i = 0; ; i++) {
        if (sum > N) {
            cout << i - 1 << endl;
            return 0;
        }

        sum *= 2;
    }
}