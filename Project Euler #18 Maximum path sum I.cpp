#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[16][16],int n,int i,int j){
    if(i==n-1){
        return arr[i][j];
    }
    if(j==n-1){
        return arr[i][j]+maxSum(arr,n,i+1,j);
    }
    return arr[i][j]+max(maxSum(arr,n,i+1,j),maxSum(arr,n,i+1,j+1));
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int st[16][16]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cin >> st[i][j];
            }
        }
        cout << maxSum(st,n,0,0) << endl;
    }
    return 0;
}
