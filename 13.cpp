#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
#include<queue>
#include<limits.h>
#include<cmath>
using namespace std;

int get_answer(const string& p);
int main() {
	string p;
	
	while (cin >> p) {
		int n = p.size();
		p.append(p.c_str());
		int head = get_answer(p);
		for (int i = 0; i < n; ++i)cout << p[i + head];
		cout << endl;
	}

	return 0;
}
int get_answer(const string& p)
{
	const int n = p.size() / 2;
	int answer_h = 0;
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (p[answer_h + j] == p[i + j]) continue;
			if (p[answer_h + j] > p[i + j]) {
				answer_h = i;
			}
			break;
		}
	}
	return answer_h;
}
