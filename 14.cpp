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

double fun(double p[3][3], int l);
int main() {
	double p[3][3];
	while (cin >> p[0][0]) {
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				if (i || j) cin >> p[i][j];
			}
		}
		double answer = p[0][0] * fun(p, 0) - p[1][0] * fun(p, 1) + p[2][0] * fun(p, 2);
		printf("%.2f\n", fabs(answer));
	}
}
double fun(double p[3][3], int l) {
	double s[4] = { 0 };
	int temp = 0;
	for (int i = 0; i < 3; ++i) {
		if (i == l)continue;
		for (int j = 1; j < 3; ++j) {
			s[temp++] = p[i][j];
		}
	}
	return s[0] * s[3] - s[1] * s[2];
}