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
    vector<int> L(N);
    for (int i = 0; i < N; i++) cin >> L[i];

    sort(all(L));
    reverse(all(L));
    int sum = 0;
    for (int i = 1; i < N; i++) {
        sum += L[i];
    }

    if (L[0] < sum)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}