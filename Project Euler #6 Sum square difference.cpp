#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long int n,m,sum;
        cin >> n ;
        m = (n*(n+1))/2;
        sum = m*m - (m*(2*n+1))/3;
        if(sum>=0){
            cout << sum << endl;
        }
        else{
            cout << -1*sum << endl;
        }
    }
    return 0;
}
