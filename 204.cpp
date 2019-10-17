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
	int n;
	bool first = true;
	unordered_map<int,int> s;
	s.reserve(250000);
	while (cin >> n) {
		s.clear();
		for (int i = 0; i < n; ++i) {
			int temp;
			cin >> temp;
			s[temp]++;
		}
		for (auto it = s.begin(); it != s.end(); ++it) {
			if (it->second >= (n / 2 )) {
				cout << it->first <<endl;
				break;
			}
		}
	}

	return 0;
}