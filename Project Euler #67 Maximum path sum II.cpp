#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int st[101][101]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cin >> st[i][j];
            }
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                st[i][j]+=max(st[i+1][j],st[i+1][j+1]);
            }
        }


        cout << st[0][0] << endl;
    }
    return 0;
}
