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
	long long  n;
	int p[1000] = { 0 };
	bool first=true;

	while (cin>>n) {
		int k = n;
		if (!n)return 0;
		memset(p, 0, 1000 * sizeof(int));
		int to1000 = 1;
		while (k < 1000 && to1000++)	k *= n;	
		k = k % 1000;
		p[k] = to1000;
		while (true && to1000++) {
			k = (k * n) % 1000;
			if (p[k]) {
				cout << p[k] + to1000 << endl;
				break;
			}
			else p[k] = to1000;
		}
			
		++n;
	}

	return 0;
}