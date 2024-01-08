#include <stdio.h>

int main(void){
    int n;
    while (scanf("%d", &n)!=EOF){
        int first = 1;
        for (int j = 1;j <= n;j++){
            if (n%j ==0){
                if (!first)printf(" ");
                else first = 0;
                printf("%d", j);
            }
        }   
        printf("\n");
    }
    return 0;
}