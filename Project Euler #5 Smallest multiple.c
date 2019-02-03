#include <iostream>
#include <boost/math/common_factor.hpp>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long int n,ans=1;
        cin >> n;
        for(long int i=2;i<=n;i++){
            ans = boost::math::lcm(ans,i);
        }
        cout << ans << endl;
    }
    return 0;
}
