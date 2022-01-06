#include <bits/stdc++.h>

#include <map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9
#define INFL 1LL << 60
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()

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
    vector<int> H(N);
    for (int i = 0; i < N; i++) cin >> H[i];

    int ans = 0;
    vector<bool> flag(N);
    for (int i = 0; i < N; i++) {
        if (!flag[i]) {
            flag[i] = true;
            for (int j = i + 1; j < N; j++) {
                if (H[j] > H[j - 1]) break;

                flag[j] = true;
                chmax(ans, j - i);
            }
        }
    }

    cout << ans << endl;
}