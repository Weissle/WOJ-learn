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
	int n;
	int p[10000] = {};

	int cas = 1;
	while (cin >> n) {
		if (n == -1)return 0;
		memset(p, 0, sizeof(int) * n);
		int answer = 0;
		int one = 0, two = 0;
		LOOP(i, 0, n) {
			cin >> p[i];
		}
		while (two < n && one <n) {
			while (one < n&& p[one] == -1)one++;
			if (one >= n)break;
			two = one+1;
			while (two < n&& p[two] == 1) two++;
			if (two >= n)break;
			answer += (two - one);
			p[one++] = -1;
			p[two++] = 1;
		}
		cout << "Case " << cas++ << ": " << answer << endl;
	}
	return 0;
}