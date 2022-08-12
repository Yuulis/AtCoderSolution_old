#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// ======================================== //

ll countMultiple(ll R, ll div, ll mod) {
	if (R == 0) return 0;

	ll res = R / div;
	if (mod <= R % div and 0 < mod) res++;
	return res;
}