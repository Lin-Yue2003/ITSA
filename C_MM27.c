#include <stdio.h>

int main(void){
    int a, b;
    while(scanf("%d%d", &a, &b)!=EOF){
        if (a>b){
            int temp = a;
            a = b;
            b = temp;
        }
        if (a==b) printf("%d\n", a);
        else printf("%d\n",(a+b)*(b-a+1)/2);
    }
    return 0;
}