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
    string O, E;
    cin >> O >> E;

    string ans;
    for (int i = 0; i < E.size(); i++) {
        ans += O[i];
        ans += E[i];
    }

    if (O.size() - E.size() == 1) ans += O[O.size() - 1];

    cout << ans << endl;
}