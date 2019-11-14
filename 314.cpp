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

	int n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0)break;
		int max = 0, max_n = 0;
		for (int i = n; i < m + 1; ++i) {
			int temp = func(i);
			if (temp > max_n) {
				max_n = temp;
				max = i;
			}
		}
		cout << max_n << endl;;
	}
	return 0;
}