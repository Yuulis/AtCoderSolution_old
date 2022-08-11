#include <bits/stdc++.h>
#include <atcoder/all>

#define all(x) (x).begin(), (x).end()
#define fix(x) fixed << setprecision(x)
#define rep(i,start,end) for(int i=(start);i<(int)(x);i++)
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
using Pair = pair<int, int>;

random_device rd;
default_random_engine eng(rd());
uniform_int_distribution<> distr(0, INF);

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
ll gcd(ll x, ll y) { if (x < y) swap(x, y); ll r; while (y > 0) { r = x % y; x = y; y = r; } return x; }
ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }
ll nCk(ll N, ll K) { if (K < 0 || N < K) return 0; ll ans = 1; for (ll i = 1; i <= K; i++) { ans *= N--; ans /= i; } return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

mt19937 mt{ random_device{}() };
constexpr double TIME_LIMIT = 3000;

struct MoveAction {
    int before_row, before_col, after_row, after_col;
    MoveAction(int before_row, int before_col, int after_row, int after_col) :
        before_row(before_row), before_col(before_col), after_row(after_row), after_col(after_col) {}
};

struct ConnectAction {
    int c1_row, c1_col, c2_row, c2_col;
    ConnectAction(int c1_row, int c1_col, int c2_row, int c2_col) :
        c1_row(c1_row), c1_col(c1_col), c2_row(c2_row), c2_col(c2_col) {}
};

struct Result {
    vector<MoveAction> move;
    vector<ConnectAction> connect;
    Result(const vector<MoveAction>& move, const vector<ConnectAction>& con) : move(move), connect(con) {}
};

struct Solver {
    static constexpr char USED = 'x';
    static constexpr int DR[4] = { 0, 1, 0, -1 };
    static constexpr int DC[4] = { 1, 0, -1, 0 };

    int N, K;
    int action_count_limit;
    mt19937 engine;
    vector<string> field;

    Solver(int N, int K, const vector<string>& field, int seed) :
        N(N), K(K), action_count_limit(K * 100), field(field)
    {
        engine.seed(seed);
    }

    bool can_move(int row, int col, int dir) const
    {
        int nrow = row + DR[dir];
        int ncol = col + DC[dir];
        if (0 <= nrow && nrow < N && 0 <= ncol && ncol < N) {
            return field[nrow][ncol] == '0';
        }
        return false;
    }

    vector<MoveAction> move(int move_limit = -1)
    {
        vector<MoveAction> res;
        if (move_limit == -1) {
            move_limit = K * 50;
        }

        for (int i = 0; i < move_limit; i++) {
            int row = engine() % N;
            int col = engine() % N;
            int dir = engine() % 4;
            if (field[row][col] != '0' && can_move(row, col, dir)) {
                swap(field[row][col], field[row + DR[dir]][col + DC[dir]]);
                res.emplace_back(row, col, row + DR[dir], col + DC[dir]);
                action_count_limit--;
            }
        }

        return res;
    }

    bool can_connect(int row, int col, int dir) const
    {
        int nrow = row + DR[dir];
        int ncol = col + DC[dir];
        while (0 <= nrow && nrow < N && 0 <= ncol && ncol < N) {
            if (field[nrow][ncol] == field[row][col]) {
                return true;
            }
            else if (field[nrow][ncol] != '0') {
                return false;
            }
            nrow += DR[dir];
            ncol += DC[dir];
        }
        return false;
    }

    ConnectAction line_fill(int row, int col, int dir)
    {
        int nrow = row + DR[dir];
        int ncol = col + DC[dir];
        while (0 <= nrow && nrow < N && 0 <= ncol && ncol < N) {
            if (field[nrow][ncol] == field[row][col]) {
                return ConnectAction(row, col, nrow, ncol);
            }
            assert(field[nrow][ncol] == '0');
            field[nrow][ncol] = USED;
            nrow += DR[dir];
            ncol += DC[dir];
        }
        assert(false);
    }

    vector<ConnectAction> connect()
    {
        vector<ConnectAction> ret;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (field[i][j] != '0' && field[i][j] != 'x') {
                    for (int dir = 0; dir < 2; dir++) {
                        if (can_connect(i, j, dir)) {
                            ret.push_back(line_fill(i, j, dir));
                            action_count_limit--;
                            if (action_count_limit <= 0) {
                                return ret;
                            }
                        }
                    }
                }
            }
        }
        return ret;
    }

    Result solve()
    {
        // create random moves
        auto moves = move();

        // from each computer, connect to right and/or bottom if it will reach the same type
        auto connects = connect();

        return Result(moves, connects);
    }
};

struct UnionFind {
    map<pair<int, int>, pair<int, int>> parent;
    UnionFind() :parent() {}

    pair<int, int> find(pair<int, int> x)
    {
        if (parent.find(x) == parent.end()) {
            parent[x] = x;
            return x;
        }
        else if (parent[x] == x) {
            return x;
        }
        else {
            parent[x] = find(parent[x]);
            return parent[x];
        }
    }

    void unite(pair<int, int> x, pair<int, int> y)
    {
        x = find(x);
        y = find(y);
        if (x != y) {
            parent[x] = y;
        }
    }
};

int calc_score(int N, vector<string> field, const Result& res)
{
    for (auto r : res.move) {
        assert(field[r.before_row][r.before_col] != '0');
        assert(field[r.after_row][r.after_col] == '0');
        swap(field[r.before_row][r.before_col], field[r.after_row][r.after_col]);
    }

    UnionFind uf;
    for (auto r : res.connect) {
        pair<int, int> p1(r.c1_row, r.c1_col), p2(r.c2_row, r.c2_col);
        uf.unite(p1, p2);
    }

    vector<pair<int, int>> computers;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (field[i][j] != '0') {
                computers.emplace_back(i, j);
            }
        }
    }

    int score = 0;
    for (int i = 0; i < (int)computers.size(); i++) {
        for (int j = i + 1; j < (int)computers.size(); j++) {
            auto c1 = computers[i];
            auto c2 = computers[j];
            if (uf.find(c1) == uf.find(c2)) {
                score += (field[c1.first][c1.second] == field[c2.first][c2.second]) ? 1 : -1;
            }
        }
    }

    return max(score, 0);
}

void print_answer(const Result& res)
{
    cout << res.move.size() << endl;
    for (auto m : res.move) {
        cout << m.before_row << " " << m.before_col << " " << m.after_row << " " << m.after_col << endl;
    }
    cout << res.connect.size() << endl;
    for (auto m : res.connect) {
        cout << m.c1_row << " " << m.c1_col << " " << m.c2_row << " " << m.c2_col << endl;
    }
}


int main()
{
    int N, K;
    cin >> N >> K;
    vector<string> field(N);
    for (int i = 0; i < N; i++) {
        cin >> field[i];
    }

    const double T0 = 3000;
    const double T1 = 600;
    double T = T0;

    int cnt = 0;
    int score = -INF;
    auto start = chrono::system_clock::now();
    while (true)
    {
        auto now = chrono::system_clock::now();
        auto elapsed = chrono::duration_cast<chrono::milliseconds>(now - start).count();
        int r1 = distr(mt);
        Solver s(N, K, field, r1);
        auto res = s.solve();

        if (elapsed >= 2970) {
            cerr << "Score : " << score << endl;
            cerr << "Time : " << elapsed << endl;
            cerr << "Loop : " << cnt << endl;
            cerr << "Seed : " << distr << endl;

            print_answer(res);

            break;
        }

        cnt++;
        if (cnt % 50 == 0) {
            auto t = elapsed / TIME_LIMIT;
            T = pow(T0, 1 - t) * pow(T1, t);
        }

        uniform_real_distribution<double> rand(0, 1);

        int temp_score = calc_score(N, field, res);
        auto p = exp((temp_score - score) / T);
        auto r2 = rand(mt);
        if (temp_score > score or r2 < p) {
            score = temp_score;
        }
    }

    return 0;
}
