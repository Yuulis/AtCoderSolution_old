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
    int N, L;
    cin >> N >> L;

    int ans = INF;
    int ans_i = -1;
    for (int i = 1; i <= N; i++) {
        if (chmin(ans, abs(L + i - 1))) ans_i = i;
    }

    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        if (ans_i != i) sum += L + i - 1;
    }
    cout << sum << endl;
}