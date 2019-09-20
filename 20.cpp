#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<cstring>
#include<queue>
#include<limits.h>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	int p[1000];
	int q[1000];
	for (int i = 0; i < n; ++i) {
		int m;
		cin >> m;
		for (int j = 0; j < m; ++j) {
			cin >> p[j];
			if (j) q[j] = p[j] - p[j - 1];
			else q[j] = p[j];
		}

		sort(q, q + m);
		cout << "Case " << i + 1 << ':' << endl;
		for (int j = 0; j < m; ++j) {
			if (j) cout << ' ';
			cout << q[j];
		}
		if (i != n - 1)cout << endl << endl;
	}
	return 0;
}
