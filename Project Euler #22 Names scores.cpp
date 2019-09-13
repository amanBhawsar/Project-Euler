#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string temp;
    vector < pair<string,int> > vec;
    for(int i=0;i<n;i++){
        cin >> temp;
        vec.push_back(make_pair(temp,i+1));
    }
    sort(vec.begin(), vec.end());
    int q;
    cin >> q;
    string a;
    while(q--){
        cin >> a;
        int ans=0;
        for(int i=0;i<vec.size();i++){
            // cout << vec[i].first<< endl;
            if(vec[i].first==a){
                for(int j=0;j<a.size();j++){
                    ans+=a[j]-'A'+1;
                }
                ans*=i+1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
