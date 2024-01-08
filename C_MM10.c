#include <stdio.h>
#include <math.h>
int main(void){
    double c;
    while(scanf("%lf",&c)!=EOF){
        printf("%.1lf\n",round((c*9/5+32)*10.0)/10.0);
    }
    return 0;
}