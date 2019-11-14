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

int func(int n) {
	int answer = 1;
	while (n != 1) {
		if (n % 2) n = 3 * n + 1;
		else n /= 2;
		answer++;
	}
	return answer;
}
int main() {
	long long p[35];
	int n, m,k;
	while (cin >> n >> m >> k) {
		if (n == 0 && m == 0)break;
		memset(p, 0, sizeof(int) * 35);
		p[1] = n;
		for (int i = 2; i < 34; ++i) {
			p[i] = (p[i - 1] * p[i - 1]) % k;
		}
		long long answer = 1;
		int point = 1;
		while (m != 0) {
			if (m & 1) {
				answer = (answer * p[point]) % k;
			}
			point++;
			m >>= 1;
		}
		cout << answer <<endl;
	}
	return 0;
}