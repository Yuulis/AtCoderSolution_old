#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int G1(int x) {
    string s = to_string(x);
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());

    return atoi(s.c_str());
}

int G2(int x) {
    string s = to_string(x);
    sort(s.begin(), s.end());

    return atoi(s.c_str());
}

int main() {
    int N, K;
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        N = G1(N) - G2(N);
    }

    cout << N << endl;
}