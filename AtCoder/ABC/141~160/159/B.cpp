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
    string S;
    cin >> S;

    int N = S.size();

    for (int i = 0; i < N / 2; i++) {
        if (S[i] != S[N - i - 1]) {
            cout << "No" << endl;
            return 0;
        }
    }

    for (int i = 0; i < (N - 1) / 2 / 2; i++) {
        if (S[i] != S[(N - 1) / 2 - i - 1]) {
            cout << "No" << endl;
            return 0;
        }
    }

    for (int i = (N + 3) / 2 - 1; i < N; i++) {
        if (S[i] != S[N - i - 1]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}