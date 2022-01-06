#include <bits/stdc++.h>

#include <map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

constexpr double PI = 3.14159265358979;

template <class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}

// ======================================== //

int main() {
    int N;
    cin >> N;
    vector<int> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];

    int ans = 0;
    for (int i = 0; i < N; i++) {
        bool flag = false;
        for (int a = 1; a <= 250; a++) {
            for (int b = 1; b <= 250; b++) {
                if (4 * a * b + 3 * a + 3 * b == S[i]) {
                    flag = true;
                    break;
                }
            }

            if (flag) break;
        }

        if (!flag) ans++;
    }

    cout << ans << endl;
}