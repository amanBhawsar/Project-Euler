#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    vector<int> primes;
    primes.push_back(2);
    for(int x=3;x<=1000000;x=x+2){
        bool isPrime = true;
        for(auto p : primes){
            if(x%p==0){
                isPrime = false;
                break;
            }
            if(p*p>x){
                break;
            }
        }
        if(isPrime){
            primes.push_back(x);
        }
    }

    int t;
    cin >> t;
    for(int z = 0; z < t; z++){
        long long n,sum=0;
        int i=0;
        cin >> n;
        while(primes[i]<=n){
            sum+=primes[i];
            i++;
        }
        cout << sum << endl;
    }
    return 0;
}
