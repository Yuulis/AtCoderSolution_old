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
    int N, M;
    cin >> N >> M;

    if (N < 2 && M < 2)
        cout << 0 << endl;
    else if (N < 2)
        cout << (M * (M - 1)) / 2 << endl;
    else if (M < 2)
        cout << (N * (N - 1)) / 2 << endl;
    else
        cout << (N * (N - 1)) / 2 + (M * (M - 1)) / 2 << endl;
}