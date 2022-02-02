#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;
constexpr auto MOD = 1000000007;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int N, Q;
    string S;
    cin >> N >> S >> Q;

    string s1 = S.substr(0, N);
    string s2 = S.substr(N);

    for (int i = 0; i < Q; i++) {
        int T, A, B;
        cin >> T >> A >> B;
        A--;
        B--;

        if (T == 1) {
            if (B < N) swap(s1[A], s1[B]);
            else if (N <= A) swap(s2[A - N], s2[B - N]);
            else swap(s1[A], s2[B - N]);
        }
        else swap(s1, s2);
    }

    cout << s1 << s2 << endl;
}