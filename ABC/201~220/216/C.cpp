#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    ll N;
    cin >> N;

    string S;
    while (N > 0) {
        if (N % 2 == 1) {
            S += 'A';
            N--;
        } else {
            S += 'B';
            N /= 2;
        }
    }
    reverse(S.begin(), S.end());

    cout << S << endl;
}