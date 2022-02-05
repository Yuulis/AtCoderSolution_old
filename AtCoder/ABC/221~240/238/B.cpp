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

ll intCeil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<int> cake;
    cake.push_back(0);
    int d = 0;
    for (int i = 0; i < N; i++) {
        d += A[i];
        d %= 360;
        cake.push_back(d);
    }

    sort(all(cake));
    int l = cake.size();
    int ans = 0;
    for (int i = 0; i < l; i++) {
        if (i != l - 1) chmax(ans, cake[i + 1] - cake[i]);
        else chmax(ans, 360 - cake[i]);
    }

    cout << ans << endl;
}