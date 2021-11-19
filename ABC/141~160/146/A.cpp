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

// ======================================== //

int main() {
    string S;
    cin >> S;

    if (S == "SUN") cout << 7 << endl;
    if (S == "MON") cout << 6 << endl;
    if (S == "TUE") cout << 5 << endl;
    if (S == "WED") cout << 4 << endl;
    if (S == "THU") cout << 3 << endl;
    if (S == "FRI") cout << 2 << endl;
    if (S == "SAT") cout << 1 << endl;
}