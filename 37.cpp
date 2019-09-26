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
	do {
		cin >> n;
		if (!n)return 0;
		cout << n / 2 + n % 2 << endl;
	} while (true);
}
