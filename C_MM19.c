#include <stdio.h>
#include <math.h>
int main(void){
    int minute;
    while(scanf("%d",&minute)!=EOF){
        double money = minute*0.9;
        if (minute>=1500){
            money *= 0.79; 
        }else if(minute>800){
            money *= 0.9; 
        }
        printf("%.1lf\n",round(money*10.0)/10.0);
    }
    return 0;
}