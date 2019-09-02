#include <bits/stdc++.h>
using namespace std;

unsigned long long int dp[5000001]={0};
unsigned long long int result[5000001]={0};

unsigned long long int Collatz(int n){
    if(n==1){
        return 0;
    }
    if(dp[n]==0){
        unsigned long long int z;
        if(n%2==0){
            z= 1+Collatz(n/2);
        }else{
            unsigned long long int k= 3*n+1,c=0;
            while(k>5000001){
                if(k%2==0){
                    k=k/2;
                }else{
                    k=3*k+1;
                }
                c++;
            }
            z=1+c+Collatz(k);
        }
        dp[n]=z;
        return z;
    }else{
        return dp[n];
    }
    
}

int main() {
    int t;
    cin >> t;
    dp[1]=1;
    unsigned long long int maxLim=0;
    unsigned long long int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
        maxLim=max(maxLim,arr[i]);        
    }
    unsigned long long int res=0,resInd=0;
    for(int i=1;i<=maxLim;i++){
        unsigned long long int k  = Collatz(i);
        if(res <= k){
            resInd=i;
            res=k;
        }
        result[i]=resInd;
    }
    for(int i=0;i<t;i++){
        cout << result[arr[i]] << endl;       
    }

    return 0;
}
