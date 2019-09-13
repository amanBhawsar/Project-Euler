#include <bits/stdc++.h>
using namespace std;


bool Zellercongruence(unsigned long day, unsigned long month, unsigned long year){
    if (month == 1){
        month = 13; 
        year--; 
    } 
    if (month == 2){
        month = 14; 
        year--; 
    } 
    unsigned long q = day; 
    unsigned long m = month; 
    unsigned long k = year % 100; 
    unsigned long j = year / 100; 
    unsigned long h = q + 13*(m+1)/5 + k + k/4 + j/4 + 5*j; 
    h = h % 7; 
    if(h==1){
        return true;
    }
    return false; 
} 

int main() {
    int t;
    cin >> t;
    while(t--){
        unsigned long y1,y2,m1,m2,d1,d2;
        cin >> y1 >> m1 >> d1;
        cin >> y2 >> m2 >> d2;
        if(d1!=1){
            m1++;
            d1=1;
            if(m1==13){
                m1=1;
                y1++;
            }
        }
        if(!(y1<y2 || (y1==y2 && m1<m2) || (y1==y2 && m1==m2 && d1<=d2))){
            swap(d1,d2);
            swap(m1,m2);
            swap(y1,y2);
        }

        int countSunday=0;
        while(y1<y2 || (y1==y2 && m1<m2) || (y1==y2 && m1==m2 && d1<=d2)){


            if(Zellercongruence(d1,m1,y1)){
                // cout << d1 << " " << m1 << " " << y1 << endl;
                countSunday++;
            }
            m1++;
            if(m1==13){
                y1++;
                m1=1;
            }
        }
        cout << countSunday << endl;
    }
    return 0;
}
