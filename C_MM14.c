#include <stdio.h>
int main(void){
    long long int a;
    while(scanf("%lld",&a)!=EOF){
        printf("%lld days\n",a/(24*60*60));
        a %= (24*60*60);
        printf("%lld hours\n",a/(60*60));
        a %= (60*60);
        printf("%lld minutes\n",a/(60));
        a %= (60);
        printf("%lld seconds\n",a);
    }
    return 0;
}