#include <stdio.h>

int main(){
    long t,a,a3,a5,a15,sum,i;

    scanf("%ld",&t);
    for(i=0;i<t;i++){
        sum=0;
        scanf("%ld",&a);
        a3=(a-1)/3;
        a5=(a-1)/5;
        a15=(a-1)/15;
        sum=(3*a3*(a3+1)+5*a5*(a5+1)-15*a15*(a15+1))/2;
        printf("%ld\n",sum);
    }
    return 0;
}
