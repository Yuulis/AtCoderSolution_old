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
    int N, K;
    cin >> N >> K;
    vector<int> c(N + 1, 0);
    for (int i = 1; i <= N; i++) { 
        cin >> c[i];
    }

    int ans = 0;
    map<int, int> mp;
    for (int i = 1; i <= K; i++)
    {
        mp[c[i]]++;
    }
    ans = (int)mp.size();

    for (int i = K + 1; i <= N; i++)
    {
        mp[c[i]]++;
        mp[c[i - K]]--;

        if (mp[c[i - K]] == 0) mp.erase(c[i - K]);
        chmax(ans, (int)mp.size());
    }

    cout << ans << endl;
}