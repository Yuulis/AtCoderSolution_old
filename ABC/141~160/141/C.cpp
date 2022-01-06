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
    ll N, K, Q;
    cin >> N >> K >> Q;
    vector<ll> A(Q), points(N, 0);
    for (int i = 0; i < Q; i++) cin >> A[i];

    for (ll i = 0; i < Q; i++) {
        points[A[i] - 1]++;
    }

    for (ll i = 0; i < N; i++) {
        if (K - Q + points[i] > 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}