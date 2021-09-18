#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<pair<ll, ll>> villages;
    for (int i = 0; i < N; i++) {
        ll a, b;
        cin >> a >> b;
        villages.push_back({a, b});
    }

    sort(villages.begin(), villages.end());
    for (int i = 0; i < N; i++) {
        if (villages[i].first > K) break;
        K += villages[i].second;
    }

    cout << K << endl;
}