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

int L;

int check(long long  num) {
	int answer = 1;
	while (num) {
		if (num % 10 == L)return answer;
		else num /= 10;
		answer++;
	}
	return 0;
}
long long func(long long max) {
	max++;
	int base = 1;
	do {
		int Lpos = check(max);
		if (Lpos) {
			max += pow(10, Lpos - 1);
		}
		else return max;
	} while (true);
	
	
}

int main() {
	int n;
	while (cin >> n) {
		cin >> L;
		long long max = 0;
		while (n) {
			n--;
			max = func(max);
		}
		cout << max;
	}
	
	return 0;
}
