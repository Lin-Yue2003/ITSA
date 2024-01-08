#include <stdio.h>

int main(void){
    int n;
    while (scanf("%d", &n)!=EOF){
        if ((n%4==0&&n%100!=0)||n%400==0)
            printf("Bissextile Year\n");
        else printf("Common Year\n");
    }
    return 0;
}