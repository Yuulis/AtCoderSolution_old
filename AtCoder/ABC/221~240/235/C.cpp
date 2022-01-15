#include <bits/stdc++.h>
#include <map>
#include <unordered_map>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;
constexpr auto MOD = 1000000007;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> a(N+1);
    unordered_map<int, vector<int>> map;
    for (int i = 1; i <= N; i++) { 
        cin >> a[i]; 
        map[a[i]].push_back(i);
    }

    for (int i = 0; i < Q; i++) {
        int x, k;
        cin >> x >> k;

        if (map.find(x) == map.end() || map.at(x).size() < k) {
            cout << -1 << endl;
            continue;
        }

        cout << map.at(x)[k - 1] << endl;
    }
}