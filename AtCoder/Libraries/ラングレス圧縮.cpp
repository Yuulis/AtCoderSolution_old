#include <bits/stdc++.h>
using namespace std;

// 圧縮
vector<pair<char, int>> rls_encode(const string& str) {
    int n = str.size();
    vector<pair<char, int>> ret;
    for (int l = 0; l < n;) {
        int r = l + 1;
        for (; r < n && str[l] == str[r]; r++) {};
        ret.push_back({ str[l], r - l });
        l = r;
    }
    return ret;
}

// 復元
string rls_decode(const vector<pair<char, int>>& code) {
    string ret = "";
    for (auto p : code) {
        for (int i = 0; i < p.second; i++) {
            ret.push_back(p.first);
        }
    }
    return ret;
}