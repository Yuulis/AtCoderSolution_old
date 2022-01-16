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

template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<ll> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<ll> cnt(N);
    for (int i = 0; i < N; i++) {
        cnt[i] = A[i] - i - 1;
    }

    for (int i = 0; i < Q; i++) {
        ll K;
        cin >> K;

        if (K > cnt[N - 1]) cout << A[N - 1] + (K - cnt[N - 1]) << endl;
        else {
            auto itr = lower_bound(all(cnt), K) - cnt.begin();
            cout << A[itr] - (cnt[itr] - K + 1) << endl;
        }
    }
}