#include <stdio.h>

int main(void){
    int h,tl,bl;
    float a;
    while (scanf("%d%d%d",&tl,&bl,&h)!=EOF){
        printf("Trapezoid area:%.1f\n",(tl+bl)/2.0*h);
    }
    return 0;
}