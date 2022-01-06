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
    int N, K;
    cin >> N >> K;
    vector<int> P(100100), Q(100100);
    for (int i = 1; i <= N; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        P[i] = a + b + c;
    }

    copy(all(P), Q.begin());
    sort(all(Q));
    reverse(all(Q));

    for (int i = 1; i <= N; i++) {
        auto itr = find(all(Q), P[i]);
        int idx = distance(Q.begin(), itr);

        if (idx <= K) {
            cout << "Yes" << endl;
        } else {
            if (P[i] + 300 >= Q[K - 1]) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}