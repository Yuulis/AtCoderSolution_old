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
    vector<string> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];

    unordered_set<string> A(S.begin(), S.end());
    for (int i = 0; i < N; i++)
    {
        if (A.count('!' + S[i])) {
            cout << S[i] << endl;
            return 0;
        }
    }

    cout << "satisfiable" << endl;
}