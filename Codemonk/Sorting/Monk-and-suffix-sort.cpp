#include <bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin>>str;
	int n;
	cin>>n;
	vector<string>arr;
	for (int i = 0; i < str.size(); i++) {
        arr.push_back(str.substr(i));
    }
	sort(arr.begin(),arr.end());
	cout<<arr[n-1];
}