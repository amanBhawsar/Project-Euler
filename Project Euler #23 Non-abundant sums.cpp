#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    int inp[t];
    int maxi=100001;
    int dp[maxi];
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
        if(i<s+1){
            dp[i]=1;
        }else{
            dp[i]=0;
        }
    }
    for(int i=0;i<t;i++){

        if(inp[i]>=28123){
            cout << "YES" << endl;
        }else{
            int f=0;
            for(int j=12;j<inp[i];j++){
                if(dp[j]==1 && dp[inp[i]-j]==1){
                    f=1;
                    break;
                }
            }
            if(f==1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
