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
    int N;
    cin >> N;
    int A[20], B[20], C[20];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A[i]--;
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < N - 1; i++) {
        cin >> C[i];
    }

    int ans = 0, temp = -2;
    for (int i = 0; i < N; i++) {
        int eat = A[i];
        ans += B[eat];

        if (temp + 1 == eat) ans += C[eat - 1];
        temp = eat;
    }

    cout << ans << endl;
}