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

    vector<pair<int, int>> B(N);
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        B.at(i).first = a;
        B.at(i).second = b;
    }
}