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
    cin >> S >> T;

    if (S[0] == '#') {
        if (S[1] == '.' && T[0] == '.' && T[1] == '#')
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    } else if (S[1] == '#') {
        if (S[0] == '.' && T[0] == '#' && T[1] == '.')
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    } else if (T[0] == '#') {
        if (S[0] == '.' && S[1] == '#' && T[0] == '.')
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    } else if (T[1] == '#') {
        if (S[0] == '#' && S[1] == '.' && T[0] == '.')
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}