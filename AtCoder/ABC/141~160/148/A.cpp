#include <bits/stdc++.h>

#include <map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9
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
    int A, B;
    cin >> A >> B;

    if (A == 1 && B == 2) cout << 3 << endl;
    if (A == 1 && B == 3) cout << 2 << endl;
    if (A == 2 && B == 1) cout << 3 << endl;
    if (A == 2 && B == 3) cout << 1 << endl;
    if (A == 3 && B == 1) cout << 2 << endl;
    if (A == 3 && B == 2) cout << 1<< endl;
}