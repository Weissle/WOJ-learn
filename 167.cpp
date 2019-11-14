#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<cstring>
#include<queue>
#include<limits.h>
#include<cmath>
#include<unordered_set>
#include<unordered_map>
using namespace std;
bool legal(int x, int y, int n, int m) {
	return (x >= 0) && y >= 0 && x < n && y < m;
}
void func(char p[101][101], int i, int j, int n, int m) {
	p[i][j] = 'X';
	for (int x = i-1; x < i+2; ++x) {
		for (int y = j-1; y < j+2; ++y) {
			if (legal(x, y, n, m)) {
				if (p[x][y] == 'O') func(p, x, y, n, m);
			}
		}
	}
	return;
}
int main() {
	char  p[101][101] = {};
	int n ,m;

	while (cin >> n>>m) {
		int answer = 0;
		if (n == 0 && m == 0)break;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> p[i][j];
			}
		}
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (p[i][j] == 'O')
				{
					answer++;
					func(p, i, j, n, m);
				}
			}
		}
		cout << answer << endl;

	}
	return 0;
}