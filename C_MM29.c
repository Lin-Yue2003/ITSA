#include <stdio.h>

int main(void){
    int n;
    while (scanf("%d",&n)!=EOF){
        int prime = 2;
        for (int i = n-1; i >=2;i--){
            int is_prime = 1;
            for (int k = i-1; k >= 2&&is_prime; k--){
                if (i%k==0) 
                    is_prime=0;
            }
            if (is_prime){
                prime = i;
                break;
            }
        }
        printf("%d\n", prime);
    }
    return 0;
}