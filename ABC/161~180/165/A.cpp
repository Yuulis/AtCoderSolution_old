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
    int K, A, B;
    cin >> K >> A >> B;

    int num = K;
    while (num <= 1000) {
        if (A <= num && num <= B) {
            cout << "OK" << endl;
            return 0;
        }

        num += K;
    }

    cout << "NG" << endl;
}