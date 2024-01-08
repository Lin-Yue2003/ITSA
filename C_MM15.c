#include <stdio.h>

int main(void){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        if (a <= 100 &&a >=0 && b <= 100 && b >=0){
            printf("inside\n");
        }else  printf("outside\n");
    }
    return 0;
}