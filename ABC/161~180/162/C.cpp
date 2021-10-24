#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

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

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;
constexpr double PI = 3.14159265358979;

// ======================================== //

int main() {
    int K;
    cin >> K;

    ll sum = 0;
    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= K; j++) {
            for (int l = 1; l <= K; l++) {
                sum += gcd(i, gcd(j, l));
            }
        }
    }

    cout << sum << endl;
}