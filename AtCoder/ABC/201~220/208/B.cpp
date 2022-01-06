#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int factorialMethod(int N) {
    int ans = 1;
    for (int i = 1; i <= N; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 10; i >= 1; i--) {
        while (N >= factorialMethod(i)) {
            N -= factorialMethod(i);
            cnt++;
        }
    }

    cout << cnt << endl;
}