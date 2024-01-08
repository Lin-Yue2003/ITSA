#include <stdio.h>
#include <math.h>
int main(void){
    long long int a, b,c,d;
    while(scanf("%lld%lld",&a, &b)!=EOF){
        printf("%lld+%lld=%lld\n",a,b,a+b);
        printf("%lld*%lld=%lld\n",a,b,a*b);
        printf("%lld-%lld=%lld\n",a,b,a-b);
        c = a %b;
        if (c >= 0)
            printf("%lld/%lld=%lld...%lld\n",a,b,a/b,a%b);
        else {
            printf("%lld/%lld=%lld...%lld\n",a,b,a/b-1,c+b);            
        }


    }
    return 0;
}