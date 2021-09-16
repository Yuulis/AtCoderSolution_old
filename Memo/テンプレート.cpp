#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<pair<int, int>> B(N);
    for (int i = 0; i < N; i++) cin >> B[i].first >> B[i].second;
}