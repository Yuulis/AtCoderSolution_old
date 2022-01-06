#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            int room = i * 100 + j;
            sum += room;
        }
    }

    cout << sum << endl;
}