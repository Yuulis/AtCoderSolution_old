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
    int N, K;
    cin >> N >> K;

    double ans = 0;
    for (int i = 1; i < N+1; i++) {
        double temp = 1.0 / N;
        int score = i;

        while (score < K)
        {
            score *= 2;
            temp /= 2;
        }

        ans += temp;
    }

    cout << fixed << setprecision(10) << ans << endl;
}