#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int RoundUpDivision(int a, int b) {
    int ans = (a + b - 1) / b;
    return ans;
}

int main() {
    int N;
    cin >> N;

    int sum = 0;
    for (int i = 1; i < N; i++) {
        if (N % i == 0)
            sum += N / i - 1;
        else
            sum += N / i;
    }

    cout << sum << endl;
}