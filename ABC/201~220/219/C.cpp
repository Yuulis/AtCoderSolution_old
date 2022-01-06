#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    string X;
    int N;
    cin >> X >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];

    vector<int> pos(26);
    for (int i = 0; i < 26; i++) {
        pos[X[i] - 'a'] = i;
    }
    sort(S.begin(), S.end(), [&](const string& s, const string& t) {
        int l = min(s.size(), t.size());
        for (int i = 0; i < l; i++) {
            if (s[i] != t[i]) return pos[s[i] - 'a'] < pos[t[i] - 'a'];
        }
        return s.size() < t.size();
    });

    for (int i = 0; i < N; i++) {
        cout << S[i] << endl;
    }
}