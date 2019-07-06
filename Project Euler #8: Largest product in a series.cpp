#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        string num;
        cin >> num;
        long max = 0;
        for(int i=0;i<=n-k;i++){
            int times = k,j=i;
            long prod = 1;
            while(times--){
                prod = prod*(num[j]-'0');
                j++;
            }
            if(prod > max) {
                max = prod;
            }
        }
        cout << max << endl;

    }
    return 0;
}

