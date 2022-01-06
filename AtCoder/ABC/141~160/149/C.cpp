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

bool isPrime(int x) {
    if (x < 2)
        return false;
    else {
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) return false;
        }
    }
    return true;
}

// ======================================== //

int main() {
    int X;
    cin >> X;

    int cnt = X;
    while (!isPrime(cnt)) {
        cnt++;
    }

    cout << cnt << endl;
}