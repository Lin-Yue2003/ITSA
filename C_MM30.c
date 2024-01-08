#include <stdio.h>

int main(void){
    int n;
    while (scanf("%d",&n)!=EOF){
        int is_prime = 1;
        int k = n-1;
        for (; k >= 2&&is_prime; k--){
            if (n%k==0) 
                is_prime=0;
        }
        if (is_prime){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
        
    }
    return 0;
}