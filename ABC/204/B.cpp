#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    int sum = 0;
    for (int i = 0; i < N; i++) {
        if (A.at(i) > 10) sum += A.at(i) - 10;
    }

    cout << sum << endl;
}