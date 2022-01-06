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
    int A, B;
    cin >> A >> B;

    for (int i = 1; i <= 1009; i++)
    {
        double priceA = i;
        priceA *= 0.08;
        double priceB = i;
        priceB *= 0.1;

        if (floor(priceA) == A && floor(priceB) == B) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}