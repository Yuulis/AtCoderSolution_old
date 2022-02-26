#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>
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
    int N;
    cin >> N;
	vector<string> s;
	for (int i = 0; i < N; i++)
	{
		string S;
		cin >> S;
		s.push_back(S);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i + 5 < N) {
				int cnt = 0;
				for (int k = 0; k < 6; k++)
				{
					if (s[i + k][j] == '#') cnt++;
				}
				if (cnt >= 4) {
					cout << "Yes" << endl;
					return 0;
				}
			}

			if (j + 5 < N) {
				int cnt = 0;
				for (int k = 0; k < 6; k++)
				{
					if (s[i][j + k] == '#') cnt++;
				}
				if (cnt >= 4) {
					cout << "Yes" << endl;
					return 0;
				}
			}

			if (i + 5 < N && j + 5 < N) {
				int cnt = 0;
				for (int k = 0; k < 6; k++)
				{
					if (s[i + k][j + k] == '#') cnt++;
				}
				if (cnt >= 4) {
					cout << "Yes" << endl;
					return 0;
				}
			}

			if (i - 5 >= 0 && j + 5 < N) {
				int cnt = 0;
				for (int k = 0; k < 6; k++)
				{
					if (s[i - k][j + k] == '#') cnt++;
				}
				if (cnt >= 4) {
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}

	cout << "No" << endl;
	return 0;
}