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
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B && B == C) {
        cout << "No" << endl;
    } else if ((A == B && A != C) || (B == C && A != B) || (C == A && C != B)) {
        cout << "Yes" << endl;
    } else
        cout << "No" << endl;
}