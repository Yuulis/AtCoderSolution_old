#include <bits/stdc++.h>

#define rep(i,start,end) for(int i=(start);i<(int)(end);i++)

using namespace std;

// ======================================== //

vector<vector<char>> rotate2DArray(vector<vector<char>> v, int dir) {
	int h = v.size();
	int w = v[0].size();
	vector<vector<char>> res(h, vector<char>(w));
	if (dir == 1) rep(i, 0, h) rep(j, 0, w) res[j][h - i - 1] = v[i][j];
	else if (dir == -1) rep(i, 0, h) rep(j, 0, w) res[w - j - 1][i] = v[i][j];
	return res;
}