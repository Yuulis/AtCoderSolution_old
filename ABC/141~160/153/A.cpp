#include <bits/stdc++.h>

#include <map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

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

int RoundUpDivision(int a, int b) {
    int ans = (a + b - 1) / b;
    return ans;
}

// ======================================== //

int main() {
    int H, A;
    cin >> H >> A;

    cout << RoundUpDivision(H, A) << endl;
}