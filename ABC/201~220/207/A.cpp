#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    vector<int> cards(3);
    cin >> cards[0] >> cards[1] >> cards[2];

    sort(cards.begin(), cards.end());
    reverse(cards.begin(), cards.end());

    cout << cards[0] + cards[1] << endl;
}