#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin >> num;
	for(int i = 0;i<num;i++){
		int a,b;
		cin>>a>>b;
		b %= a;
		vector<int>arr;
		for(int j = 0;j<a;j++){
			int n;
			cin>>n;
			arr.push_back(n);
		}
		
		for(int j = a-b; j<a;j++){
			cout<<arr[j]<<" ";
		}
		for(int j = 0;j<a-b;j++){
			cout<<arr[j]<<" ";
		}
		cout<< endl;
	}
}