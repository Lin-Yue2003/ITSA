#include <stdio.h>

int main(void){
    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF){
        c = a*a+b*b;
        if (c <= 100*100){
            printf("inside\n");
        }else  printf("outside\n");
    }
    return 0;
}