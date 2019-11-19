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
#define LOOP(V,H,T) for(int V = H ;V<T;++V)

bool check(int p[9][9], int a, int b, int value) {
	LOOP(i, 0, 9) {
		if (b == i)continue;
		else if (p[a][i] == value)return false;
		}
	LOOP(j, 0, 9) {
		if (a == j)continue;
		else if (p[j][b] == value)return false;
	}
	LOOP(i, a-a%3, a-a%3 + 3) {
		if (i == a)continue;
		LOOP(j, b - b % 3, b - b % 3 + 3) {
			if (j == b)continue;
			if (p[i][j] == value)return false;
		}
	}
	return true;
}

void func(int p[9][9],int a,int b) {
	static bool finish = false;
	if (a == 0 && b == 0) finish = false;
	int next_a = a + ((b+1)==9? 1:0);
	int next_b = (b + 1) % 9;
	if (p[a][b] != 0) {
		if (a == 8 && b == 8) {
			finish = true;
			return;
		}
		func(p, next_a, next_b);
	}
	else {
		LOOP(i, 1, 10) {
			if (check(p, a, b, i)) {
				p[a][b] = i;
				if (a == 8 && b == 8) {
					finish = true;
					return;
				}
				func(p, next_a, next_b);
				if (finish)return ;
				p[a][b] = 0;
			}	
		}
	}
	return;
}
int main() {
	int temp;
	int p[9][9] = {};

	while (cin >> temp) {
		for (int i = 0; i < 9; ++i) {
			for (int j = 0; j < 9; ++j) {
				if (i == 0 && j == 0)continue;
				cin >> p[i][j];
			}
		}
		p[0][0] = temp;
		func(p,0,0);
		LOOP(i, 0, 9) {
			LOOP(j, 0, 9) {
				cout << p[i][j];
				if (j != 8) cout << " ";
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;
}