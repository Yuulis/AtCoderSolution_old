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

// ======================================== //

int main() {
    int L, R;
    string S;
    cin >> L >> R >> S;
    L--;
    R--;

    string s = "";
    if (L != 0) s = S.substr(0, L);
    string t = S.substr(L, R-L+1);
    string r = "";
    if (R + 1 != S.size()) r = S.substr(R+1);

    reverse(t.begin(), t.end());
    cout << s + t + r << endl;
}