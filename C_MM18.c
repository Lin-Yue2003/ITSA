#include <stdio.h>

int main(void){
    int a;
    while(scanf("%d", &a)!=EOF){
        if (a >= 0) printf("0");
        else printf("1");
        for (int i = 6; i >=0; i--){
            int b = 1<<i;
            ((a&b) == 0)? printf("%d",0):printf("%d", 1);
        }
        printf("\n");
    }
    return 0;
}