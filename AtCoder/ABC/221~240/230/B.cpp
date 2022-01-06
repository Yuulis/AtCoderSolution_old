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
    string S, T;
    cin >> S;

    int l = S.size();

    for (int i = 0; i < 100000; i++) {
        T += "oxx";
    }

    bool flag = false;
    for (int i = 0; i + l - 1 < 100000; i++) {
        if (T.substr(i, l) == S) flag = true;
    }

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}