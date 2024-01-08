#include <stdio.h>

int main(void){
    int n;
    while (scanf("%d",&n)!=EOF){
        int first = 1;
        for (int i = 35; i <= n;i+=35){
            if (!first) printf(" ");
            else first = 0;
            printf("%d",i);
        }
            
        if (n >= 35)printf("\n");
    }
    return 0;
}