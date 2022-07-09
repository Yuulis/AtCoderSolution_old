#include <bits/stdc++.h>
using namespace std;

void rls(string s, vector<pair<char, int>>& v) {
    int cnt = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i - 1]) {
            v.push_back(make_pair(s[i - 1], cnt));
            cnt = 0;
        }
        cnt++;
    }
    v.push_back(make_pair(s.back(), cnt));
}