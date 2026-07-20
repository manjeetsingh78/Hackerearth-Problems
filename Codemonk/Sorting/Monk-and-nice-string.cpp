#include <bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin >> num;    
	vector<string>arr;
	for(int i = 0;i<num;i++){
		int count = 0;
		string str;
		cin>>str;
		arr.push_back(str);
		for(int j = 0;j<i;j++){
			if(arr[j]<arr[i]) count++;
		}
		cout<<count<<endl;
	}
	
}