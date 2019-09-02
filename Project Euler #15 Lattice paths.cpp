#include <bits/stdc++.h>
using namespace std;

int dp[501][501];
int possPaths(int m,int n){
    if(m<=0 || n<=0){
        return 1;
    }
    if(dp[m][n]==0){
        dp[m][n] = (possPaths(m-1,n)%1000000007+possPaths(m,n-1)%1000000007)%1000000007;
    }
    return dp[m][n];
}

int main() {
    int t;
    cin >> t;
    while(t--){
        for(int i=0;i<501;i++){
            for(int j=0;j<501;j++){
                dp[i][j]=0;
            }
        }
        int m,n;
        cin >> m >>n;
        cout << possPaths(m,n) << endl;
    }
    return 0;
}
