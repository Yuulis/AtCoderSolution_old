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
    int N, A, B;
    string S;
    cin >> N >> A >> B >> S;

    int passed = 0;
    int B_rate = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'a') {
            if (passed < A + B) {
                cout << "Yes" << endl;
                passed++;
            } else
                cout << "No" << endl;
        } else if (S[i] == 'b') {
            B_rate++;
            if (passed < A + B && B_rate <= B) {
                cout << "Yes" << endl;
                passed++;
            } else
                cout << "No" << endl;
        } else if (S[i] == 'c')
            cout << "No" << endl;
    }
}