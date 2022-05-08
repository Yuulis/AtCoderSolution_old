#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// ======================================== //

vector<ll> Eratosthenes(ll N)
{
    vector<bool> is_prime(N + 1, true);
    vector<ll> res;
    for (ll i = 2; i <= N; i++)
    {
        if (is_prime[i])
        {
            for (ll j = 2 * i; j <= N; j += i) is_prime[j] = false;
            res.emplace_back(i);
        }
    }
    return res;
}