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

int main() {
	int n;
	vector<vector<int>> p;

	while (cin >> n) {
		int money;
		cin >> money;
		p.clear();
		p.resize(n+1);
		for (int i = 0; i < n+1; ++i) p[i].resize(money+1);
		vector<int> cost(n);
		for (int i = 0; i < n; ++i) cin >> cost[i];
		for (int i = 1; i < n + 1; ++i) {
			int thisC = cost[i - 1];
			for (int j = 1; j <= money; ++j) {
				int temp = (j - thisC >= 0) ? p[i][j - thisC]+1 : 0;
				p[i][j] = max(temp, p[i - 1][j]);
			}
		}
		cout << p[n][money] << endl;

	}
	return 0;
}