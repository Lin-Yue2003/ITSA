#include <stdio.h>
#include <math.h>
int main(void){
    double a;
    while(scanf("%lf",&a)!=EOF){
        printf("%.1lf\n",round(a*1.6*10.0)/10.0);
    }
    return 0;
}