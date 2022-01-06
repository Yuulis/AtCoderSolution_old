#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;
// template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1;
// } return 0; } template<class T>bool chmin(T &a, const T &b) { if (b < a) { a
// = b; return 1; } return 0; }

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];

    int A = 0;
    int W = 0;
    int T = 0;
    int R = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == "AC")
            A++;
        else if (S[i] == "WA")
            W++;
        else if (S[i] == "TLE")
            T++;
        else if (S[i] == "RE")
            R++;
    }

    cout << "AC x " << A << endl;
    cout << "WA x " << W << endl;
    cout << "TLE x " << T << endl;
    cout << "RE x " << R << endl;
}