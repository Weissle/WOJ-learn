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

	cin >> n;
	while (n--) {
		long long a, b;
		cin >> a >> b;
		cout << a * b - (a + b) << endl;
	}
	return 0;
}