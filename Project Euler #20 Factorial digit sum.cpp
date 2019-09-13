#include <bits/stdc++.h>
using namespace std;

string multiplyStrings(string s1, string s2) {
    int countMinus=0;
    if(s1.at(0)=='-'){
        countMinus++;
        s1=s1.substr(1);
    }
    if(s2.at(0)=='-'){
        countMinus++;
        s2=s2.substr(1);
    }
    
    int n = s1.size(),m = s2.size();
    if(n==0 || m==0){
       return "0";
    }
    vector <int>res(n+m,0);
    int i_n=0,i_m=0;
    
    for(int i=n-1;i>=0;i--){
       int carry=0;
       int num1=s1[i]-'0';
       i_m=0;
       for(int j=m-1;j>=0;j--){
           int num2=s2[j]-'0';
           int sum=num1*num2+res[i_n+i_m]+carry;
           carry=sum/10;
           res[i_n+i_m]=sum%10;
           i_m++;
       }
       if(carry){
           res[i_n+i_m]+=carry;
       }
       i_n++;
    }
    int i=res.size()-1;
    while(i>=0 && res[i]==0)
        i--;
    if(i==-1){
        return "0";
    }
    string s = "";
    while(i>=0){
        s+=std::to_string(res[i--]);
    }
    if(s=="0"){
        return "0";
    }
    if(countMinus==1){
        return "-"+s;
    }
    return s;
}

int main() {
    int t;
    cin >> t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin >> arr[i];
    }
    string ans[1001];
    ans[0]="1";
    ans[1]="1";
    for(int i=2;i<=1000;i++){
            string temp = to_string(i);
            ans[i] = multiplyStrings(ans[i-1],temp);
    }
    for(int i=0;i<t;i++){
        int res=0;
        for(int j=0;j<ans[arr[i]].size();j++){
            res+=ans[arr[i]][j]-'0';
        }
        cout << res << endl;
    }
    return 0;
}
