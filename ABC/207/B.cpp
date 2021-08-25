#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    ll blue = A;
    ll red = 0;
    for (int i = 0; i < A; i++) {
        blue += B;
        red += C;

        if (blue <= D * red) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}