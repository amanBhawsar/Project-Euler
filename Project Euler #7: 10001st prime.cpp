#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    vector<int> primes;
    primes.push_back(2);
    for(int x=3;primes.size()<=10000;x=x+2){
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
        int n;
        cin >> n;
        cout << primes[n-1] << endl;
    }
    return 0;
}
