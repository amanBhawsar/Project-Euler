#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n,k=2;
        scanf("%ld",&n);
        while(k*k<=n){
            if(n%k==0){
                n=n/k;
            }
            else{
                k++;
            }
        }
        printf("%ld\n",n);
    }
    return 0;
}
