#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;


int main() {
	int n;
	while (cin >> n) {
		int* p = new int[n];
		memset(p, 0x7F, n * sizeof(int));
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < n; ++j) {
				int temp;
				cin >> temp;
				if (p[j] > temp) p[j] = temp;
			}
		}
		int sum = 0;
		for (int i = 0; i < n; ++i) sum += p[i];
		cout << sum << endl;
	}

	return 0;
}

