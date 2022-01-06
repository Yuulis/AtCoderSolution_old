#include <bits/stdc++.h>

#include <map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

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
    int N;
    cin >> N;

    map<string, int> flag;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        flag[s]++;
    }

    int MAX = 0;
    for (auto &p : flag) {
        chmax(MAX, p.second);
    }

    for (auto &p : flag) {
        if (p.second == MAX) {
            cout << p.first << endl;
        }
    }
}