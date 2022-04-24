#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using Graph = vector<vector<int>>;
using Pair = vector<pair<int, int>>;
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

int di[4] = { 0, -1, 0, 1 };
int dj[4] = { -1, 0, 1, 0 };

int to[10][5] = {
	{1, 0, -1, -1},
	{3, -1, -1, 0},
	{-1, -1, 3, 2},
	{-1, 2, 1, -1},
	{1, 0, 3, 2},
	{3, 2, 1, 0},
	{2, -1, 0, -1},
	{-1, 3, -1, 1}
};
vector<vector<int>> tiles(30, vector<int>(30));

tuple<int, int, vector<int>> calcLength(int tile_i, int tile_j, int dir) {
	int i = tile_i, j = tile_j, d = dir;
	int length = 0;
	vector<int> res;
	while (true)
	{
		int d2 = to[tiles[i][j]][d];
		res.push_back(30 * i + j);
		if (d2 == -1) return forward_as_tuple(0, length, res);
		i += di[d2];
		j += dj[d2];
		if (i < 0 || i >= 30 || j < 0 || j >= 30) return forward_as_tuple(0, length, res);
		d = (d2 + 2) % 4;
		length += 1;
		if (i == tile_i && j == tile_j && d == dir) return forward_as_tuple(length, length, res);
	}
}

int turnTile(int tile_dir) {
	if (tile_dir == 0) return 3;
	if (tile_dir == 1) return 0;
	if (tile_dir == 2) return 1;
	if (tile_dir == 3) return 2;
	if (tile_dir == 4) return 5;
	if (tile_dir == 5) return 4;
	if (tile_dir == 6) return 7;
	if (tile_dir == 7) return 6;
	else return tile_dir;
}

int main() {
	random_device rd;
	default_random_engine eng(rd());
	uniform_int_distribution<int> distr(0, 3);

	vector<bool> full_flag(900, false);

	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			char c;
			cin >> c;
			tiles[i][j] = int(c - '0');
		}
	}

	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			cout << distr(eng);
		}
	}
}