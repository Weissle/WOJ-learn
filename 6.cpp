#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;

int get_answer(const vector<int>* p, int a, int b,int n);
int main() {
	int n, m, k;
	cin >> n >> m;
	vector<int>* p;
	p = new vector<int>[n];

	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a>> b;
		p[a].push_back(b);
		p[b].push_back(a);
	}
	cin >> k;

	for (int i = 0; i < k; ++i) {
		int a, b;
		cin >> a >> b;
		cout << get_answer(p, a, b,n) << endl;
	}

	return 0;
}

int get_answer(const vector<int>* p, int a, int b,int n) {
	if (a == b)return 0;
	bool* tra = new bool[n]();
	int answer = 0;

	queue<int> thisQ, nextQ;
	
	thisQ.push(a);
	tra[a] = true;
	while (thisQ.empty() == false) {
		while (thisQ.empty() == false) {
			int temp = thisQ.front();
			thisQ.pop();
			for (auto it = p[temp].begin(); it != p[temp].end(); ++it) {
				if (tra[*it]) continue;
				else {
					if (*it == b)return answer;
					tra[*it] = true;
					nextQ.push(*it);
				}

			}
		}
		++answer;
		swap(thisQ, nextQ);
	}
	return -1;

}