#include <stdio.h>

int main(void){
    int a;
    long long total = 1;
    while(scanf("%d", &a)!=EOF){
        for(;a >= 1;a--){
            total*=a;
        }
        printf("%lld\n",total);
        total = 1;
    }
    return 0;
}