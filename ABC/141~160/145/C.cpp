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
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    for (int i = 0; i < N; i++) cin >> x[i] >> y[i];

    vector<int> v;
    for (int i = 0; i < N; i++) {
        v.push_back(i);
    }

    long double sum = 0;
    do {
        for (int i = 0; i < N - 1; i++) {
            int a = v[i];
            int b = v[i + 1];

            sum += sqrt((x[a] - x[b]) * (x[a] - x[b]) +
                        (y[a] - y[b]) * (y[a] - y[b]));
        }

    } while (next_permutation(all(v)));

    for (int i = 0; i < N; i++) {
        sum /= (i + 1);
    }

    cout << fixed << setprecision(10) << sum << endl;
}