#include <stdio.h>

int main(void){
    int n;
    while (scanf("%d", &n)!=EOF){
        int first = 1;
        for (int i = 6 ; i < n; i++){
            int sum = 0;
            for (int j = 1;j < i;j++){
                if (i%j ==0)
                    sum+= j;
            }
            if (sum==i) {
                if (!first)printf(" ");
                else first = 0;
                printf("%d", i);
            }
            
        }
        printf("\n");
    }
    return 0;
}