#include <bits/stdc++.h>
#include <atcoder/all>

#define all(x) (x).begin(), (x).end()
#define fix(x) fixed << setprecision(x)
#define rep(i,start,end) for(int i=(start);i<(int)(end);i++)
#define rrep(i,start,end) for(int i=((int)(start));i>=(end);i--)

constexpr auto PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using mint = modint1000000007;
// using mint = modint998244353;
struct Edge { int to; int cost; };
using Pair_int = pair<int, int>;
using Pair_ll = pair<ll, ll>;
using Graph = vector<vector<Edge>>;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
ll gcd(ll x, ll y) { if (x < y) swap(x, y); ll r; while (y > 0) { r = x % y; x = y; y = r; } return x; }
ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }
ll nCk(ll n, ll r) { if (r < 0 || n < r) return 0; ll ans = 1; for (ll i = 1; i <= r; i++) { ans *= n--; ans /= i; } return ans; }
int get_rand(int seed, int min, int max) { static mt19937_64 mt64(seed); uniform_int_distribution<int> get_rand_int(min, max); return get_rand_int(mt64); }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
template <class T1, class T2> inline auto mod(T1 x, T2 r) { return (x % r + r) % r; }

vector<int> A(202020);
vector<int> C(202020);

void MergeSort(int l, int r) {
	if (r - l == 1) return;

	int m = (l + r) / 2;
	MergeSort(l, m);
	MergeSort(m, r);

	int c1 = l, c2 = m, cnt = 0;
	while (c1 != m || c2 != r) {
		if (c1 == m) {
			C[cnt] = A[c2]; c2++;
		}
		else if (c2 == r) {
			C[cnt] = A[c1]; c1++;
		}
		else {
			if (A[c1] <= A[c2]) {
				C[cnt] = A[c1]; c1++;
			}
			else {
				C[cnt] = A[c2]; c2++;
			}
		}
		cnt++;
	}

	rep(i, 0, cnt) A[l + i] = C[i];
}

// ======================================== //

int main() {
	int N;
	cin >> N;
	rep(i, 1, N + 1) cin >> A[i];

	MergeSort(1, N + 1);
	rep(i, 1, N + 1) cout << A[i] << endl;

	return 0;
}