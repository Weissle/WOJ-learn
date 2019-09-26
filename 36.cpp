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
/*
class numb {
public:
	int size = 0;
	string str;
	numb() = default;
	numb(string _str):str(_str) {
		size = str.size();
	}
	~numb() = default;
};

char sum_c(char a, char b, char c,char &d) {
	int x, y, z, w;
	x = (a == '\0') ? 0 : (a - '0');
	y = (b == '\0') ? 0 : (b - '0');
	z = (c == '\0') ? 0 : (c - '0');
	w = (d == '\0') ? 0 : (d - '0');

	int sum = x + y + z + w;
	d = (char)(sum / 10 + '0');
	return char(sum % 10 + '0');
}
void fun_sum(numb p[502], int target) {
	const string& n1 = p[target - 1].str, & n2 = p[target - 2].str, & n3 = p[target - 3].str;
	string temp;
	temp.reserve(n1.size() + 1);
	char c='0';
	for (auto i = 0; i < n1.size(); ++i) {
		temp.push_back(sum_c(n1[i], n2[i], n3[i], c));
	}
	if (c != '0')temp.push_back(c);
	p[target] = numb(temp);
	return;
}

int main() {
	int n;
	numb p[502] = { {"0"},{"1"},{"2"},{"4"} };
	int now_max = 3;
	do {
		cin >> n;
		if (!n) return 0;
		else if (n > now_max) {

			for (int i = now_max + 1; i <= n; ++i) {
				fun_sum(p, i);
			}
			now_max = n;
		}
		for (int i = p[n].str.size() - 1; i >= 0; --i) {
			cout << p[n].str[i];
		}
		cout << endl;
		
	} while (true);
	return 0;
}
*/

int main() {
	int n;
	int p[500] = { 0,1,2,4 };
	
	for (int i = 4; i < 60; ++i) {
		p[i] = p[i - 1] + p[i - 2] + p[i - 3];
	}
	return 0;
}