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

template <class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

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
    
    vector<vector<ll>> v;
    v.resize(N);
    for (int i = 0; i < N; i++) {
        ll L;
        cin >> L;

        v[i].resize(L);
        for (int j = 0; j < L; j++) {
            cin >> v[i][j];
        }
    }

    map<int, int> D;
    set<int> E;

    cout << fixed << setprecision(10) << N << endl;
}