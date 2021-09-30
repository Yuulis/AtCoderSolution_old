#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;
// template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
// template<class T>bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<pair<int, int>> B(N);
    for (int i = 0; i < N; i++) cin >> B[i].first >> B[i].second;

    vector<vector<int>> C(M, vector<int>(N));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> C[i][j];
        }
    }

    cout << fixed << setprecision(10) << N << endl;
}