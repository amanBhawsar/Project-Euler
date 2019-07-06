#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n,a,b,c;
        cin >> n;
        int prod = -1; 
        for(a=1;a<=n/3;a++){
            b=(n*n-2*n*a)/(2*n-2*a);
            c=n-a-b; 
            if(c*c==(a*a+b*b)){ 
                if(a*b*c>prod){
                    prod=a*b*c; 
                }
            }
        }
        cout << prod << endl;
    }
    return 0;
}