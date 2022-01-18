#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;
constexpr auto MOD = 1000000007;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int N, Q;
    string S;
    cin >> N >> Q >> S;

    vector<int> flag(N);
    for (int i = 0; i < N - 1; i++) {
        if (S[i] == 'A' && S[i + 1] == 'C') flag[i] = 1;
        else flag[i] = 0;
    }

    vector<int> s(N + 1, 0);
    s[0] = flag[0];
    for (int i = 1; i < N; ++i) s[i] = s[i - 1] + flag[i];

    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        int ans = s[r - 1];
        if (l) ans -= s[l - 1];

        cout << ans << endl;
    }
}