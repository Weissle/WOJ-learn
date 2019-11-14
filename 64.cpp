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
	int p[1000];
	while(cin>>n){
		memset(p,0,sizeof(int)*1000);
		for(int i=0;i<n;++i){
			int temp;
			cin>>temp;
			p[temp]++;
		}
		for(int i=0;i<1000;i++){
			if(p[i])cout<<i<<' ';
		}
		cout<<endl;
	}
	return 0;
}
