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

string NumtoK(ll x, ll k) {
    string s;
    while (x != 0)
    {
        s += to_string(x % k);
        x /= k;
    }
    return s;
}

int main() {
    ll K;
    cin >> K;

    string str = NumtoK(K, 2);

    string ans;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '1') ans += '2';
        else ans += '0';
    }
    reverse(all(ans));

    cout << ans << endl;
}