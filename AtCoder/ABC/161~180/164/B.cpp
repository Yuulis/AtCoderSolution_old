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
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    for (int i = 0; A > 0 && C > 0; i++) {
        if (i % 2 == 0) {
            C -= B;
        } else {
            A -= D;
        }
    }

    if (A <= 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}