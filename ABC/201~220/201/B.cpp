#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<pair<int, string>> mountain;
    for (int i = 0; i < N; i++) {
        int t;
        string s;
        cin >> s >> t;
        mountain.push_back({t, s});
    }

    sort(mountain.begin(), mountain.end());
    reverse(mountain.begin(), mountain.end());

    cout << mountain[1].second << endl;
}