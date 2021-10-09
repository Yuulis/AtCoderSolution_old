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
    string N;
    cin >> N;

    if (N.size() == 1)
        cout << "000" + N << endl;
    else if (N.size() == 2)
        cout << "00" + N << endl;
    else if (N.size() == 3)
        cout << "0" + N << endl;
    else if (N.size() == 4)
        cout << N << endl;
}