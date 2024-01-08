#include <stdio.h>

int main(void){
    int n, sum = 0;
    while(scanf("%d",&n)!=EOF){
        sum = 0;
        for (int i = 1; i <= n/3;i++){
            sum+=3*i;
        }
        printf("%d\n", sum);
    }
    return 0;
}