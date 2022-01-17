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

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    string S;
    cin >> S;

    int l = S.size();

    int ans = 0;
    bool flag = false;
    for (int i = 0; i < l; i++) {
        for (int j = i; j < l; j++) {
            bool flag = true;
            for (int k = i; k < j + 1; k++) {
                if (S[k] != 'A' && S[k] != 'T' && S[k] != 'G' && S[k] != 'C') flag = false;
            }

            if (flag) chmax(ans, j - i + 1);
        }
    }

    cout << ans << endl;
}