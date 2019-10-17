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
	string str;
	while (cin >> str) {
		int p[256] = { 0 };
		if (str == "#")return 0;
		int head = 0, tail = 0;
		int answerHead = 0, answerTail = 0;
		while (tail < str.size()) {
			if (p[str[tail]] == 0) {
				p[str[tail]]++;
				tail++;
			}
			else {
				if (answerTail - answerHead < tail - head) {
					answerTail = tail;
					answerHead = head;
				}
				while (str[head] != str[tail]) {
					p[str[head]]--;
					++head;
				}
				p[str[head]]--; ++head;
			}
		}
		string answerStr = str.substr(answerHead, answerTail - answerHead);
		cout << answerStr.size() << " " << answerStr << endl;
	}

	return 0;
}
