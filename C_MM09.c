#include <stdio.h>

int main(void){
    int a;
    while(scanf("%d",&a)!=EOF){
        if (a<31){
            printf("%d\n",1<<a);
        }else
            printf("Value of more than 31\n");
    }
    return 0;
}