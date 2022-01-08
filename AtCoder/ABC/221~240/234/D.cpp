#include <bits/stdc++.h>
#include <map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9
#define INFL 1LL << 60
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;

template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> P(N+1);
    for (int i = 1; i < N + 1; i++) cin >> P[i];

    // set‰ð–@
    set<int> set;
    for (int i = 1; i < K+1; i++) {
        set.insert(P[i]);
    }
    auto itr = set.begin();
    cout << *itr << endl;

    for (int i = K+1; i < N + 1; i++) {
        set.insert(P[i]);
        if (*itr < P[i]) itr++;
        cout << *itr << endl;
    }


    // priority_queue‰ð–@
    priority_queue<int, vector<int>, greater<int>> que;
    for (int i = 1; i < K+1; i++) {
        que.push(P[i]);
    }
    cout << que.top() << endl;

    for (int i = K+1; i < N+1; i++) {
        if (que.top() < P[i]) {
            que.pop();
            que.push(P[i]);
        }
        cout << que.top() << endl;
    }
}