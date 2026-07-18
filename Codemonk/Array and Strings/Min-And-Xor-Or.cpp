#include <bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin >> num;    
	for(int i = 0;i<num;i++){
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int j = 0;j<n;j++){
			cin>>arr[j];
		}
		sort(arr.begin(),arr.end());
		int minXor = INT_MAX;
		for(int j = 1;j<n;j++){
			int xo = ((arr[j] & arr[j-1]) ^ (arr[j] | arr[j-1]));
			minXor = min(minXor,xo);
		}
		cout<<minXor<<endl;
	}
}