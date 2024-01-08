#include <stdio.h>
#include <math.h>
int main(void){
    int hr,base_money;
    while(scanf("%d%d",&hr,&base_money)!=EOF){
        double money = 0.0;
        if (hr>120){
            money += (hr-120)*base_money*1.66;
            hr=120;
        }
        if(hr>60){
            money += (hr-60)*base_money*1.33;
            hr=60;       
        }
        money += hr*base_money;        
        
        printf("%.1lf\n",round(money*10.0)/10.0);
    }
    

    return 0;
}