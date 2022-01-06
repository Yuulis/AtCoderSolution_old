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

// ======================================== //

int main() {
    string S;
    cin >> S;

    if (S[0] == S[1] && S[1] == S[2])
        cout << 1 << endl;
    else if (S[0] == S[1] || S[1] == S[2] || S[2] == S[0])
        cout << 3 << endl;
    else
        cout << 6 << endl;
}