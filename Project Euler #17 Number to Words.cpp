#include <bits/stdc++.h>
using namespace std;

string arr[20]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen","Twenty"};
string tens[8]={"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
void hundFunc(int n){
    if(n/100){
        cout << arr[n/100 - 1] << " " << "Hundred " ;
    }
    n=n%100;
    if(n==0){
        return;
    }
    if(n<=20 && n>0){
        cout << arr[n-1] << " ";
    }else{
        int z=n/10;
        if(n%10==0){
            cout << tens[z-2] << " ";
        }else{
            cout << tens[z-2] << " " << arr[n%10-1] << " ";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        long int n,a,b,c,d;  //order-> a+Billion+b+Million+c+Thousand+d
        cin >> n;
        if(n==0){
            cout << "Zero" << endl;
            continue;
        }
        d=n%1000; 
        n=n/1000;
        c=n%1000; 
        n=n/1000;
        b=n%1000; 
        n=n/1000;
        a=n;
        // cout << a  << " " << b << " " << c << " " << d << endl; 
        
        if(a){
            hundFunc(a);
            cout << "Billion ";
        }
        if(b){
            hundFunc(b);
            cout << "Million ";
        }
        if(c){
            hundFunc(c);
            cout << "Thousand ";
        }
        if(d){
            hundFunc(d);
        }
        cout << endl;
    }
    return 0;
}
