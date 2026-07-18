#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int n;
    cin >> n;

    for(int i = 0;i<n;i++){
        int num;
        cin>>num;
        vector<vector<int>> arr(num,vector<int>(num));
        for(int j = 0;j<num;j++){
            for(int k = 0;k<num;k++){
                cin>>arr[j][k];
            }
        }
    }
    int count = 0;

    for(int i = 0;i<num;i++){
        for(int j = 0;j<num;j++){
            for(int k = i;k<num;k++){
                for(int l = j;l<num;l++){
                    if(arr[i][j]>arr[k][l]){
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;
}