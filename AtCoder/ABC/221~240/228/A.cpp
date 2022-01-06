#include <bits/stdc++.h>

#include <iostream>
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
    int S, T, X;
    cin >> S >> T >> X;

    if (S > T) {
        if ((0 <= X && X < T) || (S <= X && X < 24))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    } else {
        if (S <= X && X < T)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}