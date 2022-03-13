#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using Graph = vector<vector<int>>;
using mint = modint998244353;

#define all(x) (x).begin(), (x).end()

constexpr auto PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

ll intCeil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
	int N, K;
	cin >> N >> K;
	vector<ll> cnt(N);
	vector<bool> flag(N, false);
	for (int i = 0; i < K; i++)
	{
		char c;
		int k;
		cin >> c >> k;
		k--;
		
		if (c == 'L') {
			flag[k] = true;
			for (int j = k; j < N; j++)
			{
				if (flag[j]) cnt[j] = 1;
				else cnt[j]++;
			}
		}
		else {
			flag[k] = true;
			for (int j = k; j >= 0; j--)
			{
				if (flag[j]) cnt[j] = 1;
				else cnt[j]++;
			}
		}
	}

	mint ans = 1;
	for (int i = 0; i < N; i++)
	{
		ans *= cnt[i];
	}
	cout << ans.val() << endl;
}