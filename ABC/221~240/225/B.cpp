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
    int N;
    cin >> N;
    vector<int> flag(N + 1, 0);
    for (int i = 1; i < N + 1; i++) {
        int a = 0, b = 0;
        cin >> a >> b;
        flag[a]++;
        flag[b]++;
    }

    bool ok = false;
    for (int i = 1; i < N + 1; i++) {
        if (flag[i] != 1) {
            if (flag[i] == N - 1) {
                if (ok == true) {
                    cout << "No" << endl;
                    return 0;
                } else {
                    ok = true;
                }
            } else {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}