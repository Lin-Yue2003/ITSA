#include <stdio.h>
#include <math.h>
int main(void){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        printf("%d\n",(a+b)*(a+b));
    }
    return 0;
}