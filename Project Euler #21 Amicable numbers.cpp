#include <bits/stdc++.h>
using namespace std;

int dp[100000+1];

int main() {
    int t;
    cin >>t;
    int inp[t];
    int maxi=100000;
    for(int i=0;i<t;i++){
        cin >> inp[i];
    }
    dp[0]=0;
    for(int i=1;i<=maxi;i++){
        int s=0;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                if(j == i/j){
                    s+=j;
                }else{
                    s+=j + i/j;
                }                
            }       
        }
        dp[i]=s+1;
    }
    for(int i=0;i<t;i++){
        int ans=0;
        for(int j=1;j<=inp[i];j++){
            if(dp[j]>100000){
                continue;
            }
            if(j==dp[dp[j]]){
                if(j!=dp[j]){
                    // cout << j << " " << dp[j] << endl;
                    ans+=j;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
