#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N), C(N);
    for (auto& i : A) {
        cin >> i;
        i--;
    }
    for (auto& i : B) {
        cin >> i;
        i--;
    }
    for (auto& i : C) {
        cin >> i;
        i--;
    }

    vector<int> count(N);
    for (int i = 0; i < N; i++) count[B[C[i]]]++;

    ll ans = 0;
    for (int i = 0; i < N; i++) ans += count[A[i]];

    cout << ans << endl;
}