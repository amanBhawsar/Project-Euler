#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int a= 0; a < t; a++){
        long a=1,b=2,s=2;
        long n,sum=0;
        scanf("%ld",&n);

        while(s<n){
            if(s%2==0){
                sum+=s;
            }
            s=a+b;
            a=b;
            b=s;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
