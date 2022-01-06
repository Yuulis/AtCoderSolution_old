#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int Kto10(ll x, ll k) {
    ll ans = 0;
    ll base = 1;
    while (x > 0) {
        ans = ans + (x % 10) * base;
        x = x / 10;
        base = base * k;
    }
    return ans;
}

int main() {
    ll K, A, B;
    cin >> K >> A >> B;

    A = Kto10(A, K);
    B = Kto10(B, K);

    cout << A * B << endl;
}