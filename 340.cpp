#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
#include<queue>
#include<limits.h>
#include<cmath>
#include<cctype>
#include<unordered_set>
#include<unordered_map>

using namespace std;
#define LOOP(V,H,T) for(int V = H ;V<T;++V)
void func(string &a) {
	a[0] = toupper(a[0]);
	LOOP(i, 1, a.size()) {
		a[i] = tolower(a[i]);
	}
	return;
}
int main() {
	int n;

	cin >> n;
	while (n--) {
		string a, b;
		cin >> a >> b;
		func(a);
		func(b);
		cout << b << " " << a << endl;
	}
	return 0;
}