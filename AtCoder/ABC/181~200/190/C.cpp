#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <atcoder/modint.hpp>

using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;
using mint = modint998244353;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

ll intCeil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int N, M, K;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) cin >> A[i] >> B[i];
    cin >> K;
    vector<int> C(K), D(K);
    for (int i = 0; i < K; i++) cin >> C[i] >> D[i];

    int ans = 0;
    for (int bit = 0; bit < (1 << K); bit++) {
        vector<bool> choice(N + 1);

        int cnt = 0;
        for (int i = 0; i < K; i++) {
            if (bit & (1 << i)) choice[D[i]] = true;
            else choice[C[i]] = true;
        }

        for (int i = 0; i < M; i++) {
            if (choice[A[i]] and choice[B[i]]) cnt++;
        }
        ans = max(cnt, ans);
    }

    cout << ans << endl;
}