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
    int N, M;
    cin >> N >> M;
    vector<vector<bool>> T(N, vector<bool>(N));
    vector<vector<bool>> A(N, vector<bool>(N));
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        T[a][b] = T[b][a] = true;
    }
    for (int i = 0; i < M; i++) {
        int c, d;
        cin >> c >> d;
        c--;
        d--;

        A[c][d] = A[d][c] = true;
    }

    vector<int> P(N);
    iota(begin(P), end(P), 0);

    int ans = 0;
    do
    {
        bool flag = true;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++)
            {
                if (T[i][j] != A[P[i]][P[j]]) flag = false;
            }
        }

        if (flag) {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(all(P)));

    cout << "No" << endl;
    return 0;
}