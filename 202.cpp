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

bool fun(int a, int b, int c, int& x, int& y);
int main() {
	int n;
	cin >> n;
	int answer=0;
	for (int i = 0; i < 2 * n + 1; ++i) {
		int temp;
		cin >> temp;
		answer ^= temp;
	}
	cout << answer;
	return 0;
}
bool fun(int a, int b, int c, int& x, int& y) {
	if (a != b && b != c && a != c) return false;
}