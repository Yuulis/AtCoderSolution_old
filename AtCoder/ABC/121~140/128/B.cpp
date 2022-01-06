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
    vector<string> S(N);
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i] >> P[i];
    }

    vector<int> num(N);
    iota(all(num), 0);

    sort(all(num), [&](const int &a, const int &b) {
        if (S[a] == S[b]) {
            return P[a] > P[b];
        } else
            return S[a] < S[b];
    });

    for (auto &&i : num) {
        cout << i + 1 << endl;
    }
}