#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> arr[100005];
double dfs (int s,int p) {
	double sum = 0.0 , count = 0;
	for (int i = 0;i<arr[s].size();i++) {
		if (arr[s][i] == p)continue;
		sum += 1.0 + dfs(arr[s][i],s);
		count++;
	}
	if (count == 0)return 0;
	return sum / count;
}

int main() {

	int n,node1,node2;
	cin>>n;
	for(int i=0;i<n-1;i++){
		cin>>node1>>node2;
		arr[node2].push_back(node1);
		arr[node1].push_back(node2);
	}
	cout<<fixed<<setprecision(15)<<dfs(1,0)<<endl;
	// your code goes here
	return 0;
}
