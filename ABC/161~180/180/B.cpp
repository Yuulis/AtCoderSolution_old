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
    vector<ll> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    ll Da = 0;
    ll Db = 0;
    ll Dc = 0;
    for (int i = 0; i < N; i++)
    {
        Da += abs(A[i]);
        Db += abs(A[i]) * abs(A[i]);
        Dc = max(Dc, abs(A[i]));
    }

    double Db_ans = sqrt(Db);

    cout << Da << endl;
    cout << fixed << setprecision(10) << Db_ans << endl;
    cout << Dc << endl;
}