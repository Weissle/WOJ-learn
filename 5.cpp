#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;
int main() {
	int line;
	int weight[100];
	int score[100];
	
	while (cin>>line) {
		for (int i = 0; i < line; ++i) {
			scanf("%d%d",weight+i,score+i);
		}
		int maxWeight;
		cin >> maxWeight;
		vector<int> upLine, nowLine;
		upLine.resize(maxWeight+1);
		nowLine.resize(maxWeight+1);
		for (int i = 0; i < line; ++i) {
			for (int j = 0; j < maxWeight+1; ++j) {
				if (j - weight[i] < 0) nowLine[j] = upLine[j];
				else {
					nowLine[j] = max(upLine[j - weight[i] ] + score[i], upLine[j]);
				}

			}
			swap(upLine, nowLine);
		}
		cout << upLine[maxWeight] <<endl;

	}

	return 0;
}