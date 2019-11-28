#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
#include<queue>
#include<limits.h>
#include<cmath>
#include<cctype>
#include<unordered_set>
#include<unordered_map>

using namespace std;
#define LOOP(V,H,T) for(int V = H ;V<T;++V)

int main() {
	int p[10][10] = {};
	int n,m;
	int s = 0;
	LOOP(i, 0, 10) {
		for (int j = 0; j <= i; ++j) {
			p[i-j][j] = s++;
		}
	}
	while (cin >> m >> n) {
		if (n == 0 && m == 0) {
			return 0;
		}
		for(int i=n-1;i>=0;i--) {
			LOOP(j, 0, n - i) {
				printf("%2d ", p[i][j] + m);
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}