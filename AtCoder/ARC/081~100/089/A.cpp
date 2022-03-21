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

template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int N;
    cin >> N;
    vector<int> t(N), x(N), y(N);
    for (int i = 0; i < N; i++) cin >> t[i] >> x[i] >> y[i];

    int preT = 0, preX = 0, preY = 0;
    for (int i = 0; i < N; i++) {
        int T = t[i] - preT;
        int D = abs(x[i] - preX) + abs(y[i] - preY);

        if (T < D || (T - D) % 2 == 1) {
            cout << "No" << endl;
            return 0;
        }

        preT = t[i];
        preX = x[i];
        preY = y[i];
    }

    cout << "Yes" << endl;
    return 0;
}