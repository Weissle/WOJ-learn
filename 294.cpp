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
	int p[35] = { 1,1 };
	int n;
	while (cin >> n) {
		for (int i = 2; i < 31; ++i) {
			p[i] = p[i - 1] + p[i - 2] * 2;
		}
		for (int i = 0; i < n; ++i) {
			int temp;
			cin >> temp;
			cout << p[temp*2] << endl;
		}
	}
	return 0;
}