#include <bits/stdc++.h>
using namespace std;

string sum(string s1, string s2){
    int m=s1.length(),n=s2.length();
    if(m>n){
        swap(s1,s2);
    }
    m=s1.length();
    n=s2.length();
    string ans="";
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    int carry=0;
    for(int i=0;i<m;i++){
        int sum=(s1[i]-'0')+(s2[i]-'0')+carry;
        carry=sum/10;
        ans.push_back(sum%10 + '0');
    }
    for(int i=m;i<n;i++){
        int sum=(s2[i]-'0')+carry;
        ans.push_back(sum%10+'0');
        carry=sum/10;
    }
    if(carry){
        ans.push_back(carry+'0');
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int n;
    string res="0",a;
    cin >> n;
    while(n--){
        cin >> a;
        res=sum(a,res);
    }
    for(int i=0;i<10;i++){
        cout << res[i] ;
    }
    return 0;
}