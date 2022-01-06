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
    ll A, B;
    cin >> A >> B;

    string A_str = to_string(A), B_str = to_string(B);
    int l = min(A_str.size(), B_str.size());

    for (int i = 0; i < l; i++) {
        ll x = A % 10, y = B % 10;
        if (x + y > 9) {
            cout << "Hard" << endl;
            return 0;
        }

        A /= 10;
        B /= 10;
    }

    cout << "Easy" << endl;
    return 0;
}