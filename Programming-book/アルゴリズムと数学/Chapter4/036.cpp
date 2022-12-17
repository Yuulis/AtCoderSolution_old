#include <bits/stdc++.h>
#include <atcoder/all>

#define all(x) (x).begin(), (x).end()
#define fix(x) fixed << setprecision(x)
#define rep(i,start,end) for(ll i=(start);i<(ll)(end);i++)
#define rrep(i,start,end) for(ll i=((ll)(start));i>=(end);i--)

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

class Point {
private:

public:
    lld x, y;

    Point() {
        x = 0;
        y = 0;
    }

    Point(lld _x, lld _y) {
        x = _x;
        y = _y;
    }
};

class Vec2 {
private:

public:
    lld x, y;

    Vec2() {
        x = 0,
            y = 0;
    }

    Vec2(Point& p1, Point& p2) {
        x = p2.x - p1.x;
        y = p2.y - p1.y;
    }

    lld length() {
        return sqrt(x * x + y * y);
    }

    lld dot(Vec2& v) {
        return x * v.x + y * v.y;
    }

    lld cross(Vec2& v) {
        return x * v.y - y * v.x;
    }
};

// ======================================== //

int main() {
    int A, B, H, M;
    cin >> A >> B >> H >> M;

    double angle_h = 0.5 * ((H * 60) + M) * PI / 180;
    double angle_m = 6 * M * PI / 180;

    double angle = angle_h - angle_m;

    double dis = sqrt(A * A + B * B - 2 * A * B * cos(angle));

    cout << fix(10) << dis << endl;
}