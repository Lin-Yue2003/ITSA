#include <stdio.h>
#include <math.h>
int main(void){
    int a;
    float c = 100-30*2.54;
    while (scanf("%d",&a)!=EOF){
        printf("%d\n",(int)ceil(a*100.0/c));
    }
    return 0;
}