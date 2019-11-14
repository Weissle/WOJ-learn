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
	string str;
	int n = 1;

	while (cin >> str) {
		if (str == "#") break;
		for (auto i = 0; i < str.size(); ++i) {
			if (i % 2 == 1) {
				str[i] = toupper(str[i]);
			}
		}
		cout <<"Case "<<n++<<": "<< str << endl;

	}
	return 0;
}