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
    string S;
    cin >> S;

    vector<int> flag(26);
    for (auto &&c : S) {
        int x = c - 'A';
        flag[x]++;
    }

    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if (flag[i] == 2) cnt++;
    }

    if (cnt == 2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}