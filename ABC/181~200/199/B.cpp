#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);
    for (int i = 0; i < N; i++) cin >> B.at(i);

    int cnt = 0;
    for (int i = 1; i <= 1000; i++) {
        bool flag = true;

        for (int j = 0; j < N; j++) {
            if (i < A[j] || B[j] < i) flag = false;
        }
        if (flag) cnt++;
    }

    cout << cnt << endl;
}