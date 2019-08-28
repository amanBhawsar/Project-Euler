#include <iostream>
#include <algorithm>
using namespace std;

int noOfFact(int n){
    int ans=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i!=n/i){
                ans+=2;
            }else{
                ans++;
            }
        }
    }
    return ans;
}

int dp[1001]={0};

int main() {
    int t,noOfFac=1,k,maxi=0;
    cin >> t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin >> arr[i];
        maxi=max(maxi,arr[i]);
    }
    for(int i=1;noOfFac<=maxi;i++){
        k=(i*(i+1))/2;
        int st = noOfFact(k);
        while(st>noOfFac){
            dp[noOfFac]=k;
            noOfFac++;
        }
    }
    for(int i=0;i<t;i++){
        cout << dp[arr[i]] << endl;;
    }

    return 0;
}
