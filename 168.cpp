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
char func(const char p[11][11], int i, int j, int n, int m) {

	int answer=0;
	for (int x = i-1; x < i+2; ++x) {
		for (int y = j-1; y < j+2; ++y) {
			if (legal(x, y, n, m)) {
				if (p[x][y] == '*')++answer;
			}
		}
	}
	return '0' + answer;
}
int main() {
	char  p[11][11] = {};
	int n ,m;
	bool first = true;
	while (cin >> n) {
		if (first)first = false;
		else cout << endl;
		m = n;
		char click[11][11] = {};
		char answer[11][11] = {};

		if (n == 0 && m == 0)break;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> p[i][j];
			}
		}
		bool boom = false;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> click[i][j];
				if (p[i][j] == '*' && click[i][j]=='x') {
					boom = true;
				}
			}
		}

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (click[i][j] == '.') 
				{
					if (boom && p[i][j] == '*') answer[i][j] = '*';
					else answer[i][j] = '.';
				}
				if (click[i][j] == 'x') {
					if (boom && p[i][j] == '*') answer[i][j] = '*';
					else if (p[i][j] == '*') answer[i][j] = '.';
					else answer[i][j] = func(p, i, j, n, n);
				}
			}
		}
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cout << answer[i][j];
			}
			cout << endl;
		}
		

	}
	return 0;
}