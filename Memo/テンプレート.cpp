#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    vector<pair<int, int>> B;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        B.push_back({a, b});
    }
}