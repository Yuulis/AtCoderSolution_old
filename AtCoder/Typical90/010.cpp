#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;
using mint = modint998244353;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

ll intCeil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
	int N, Q;
	cin >> N;
	vector<int> A(N, 0), B(N, 0);
	for (int i = 0; i < N; i++)
	{
		int C, P;
		cin >> C >> P;
		if (C == 1) A[i] = P;
		else if (C == 2) B[i] = P;
	}

	vector<int> sA(N + 1, 0), sB(N + 1, 0);
	for (int i = 0; i < N; i++)
	{
		sA[i + 1] = sA[i] + A[i];
		sB[i + 1] = sB[i] + B[i];
	}

	cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		int L, R;
		cin >> L >> R;
		L--;
		cout << sA[R] - sA[L] << " " << sB[R] - sB[L] << endl;
	}
}