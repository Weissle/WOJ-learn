#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
#include<queue>
#include<limits.h>
#include<cmath>
using namespace std;


int main() {
	int n;

	while (cin >> n) {
		if (!n) return 0;
		int max = INT_MIN;
		for (int i = 0; i < n; ++i) {
			int temp;
			cin >> temp;
			max = max > temp ? max : temp;
		}
		max = max % 2006;
		if (max < 0)max += 2006;
		int times = 1;
		while (--n) {
			times <<= 1;
			times %= 2006;
		}
		cout << (max * times) % 2006 << endl;


	}

	return 0;
}

