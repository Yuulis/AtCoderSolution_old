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

string NumtoK(ll x, ll k) {
    string s;
    while (x != 0) {
        s += to_string(x % k);
        x /= k;
    }
    return s;
}

// ======================================== //

int main() {
    int N, K;
    cin >> N >> K;

    cout << NumtoK(N, K).size() << endl;
}