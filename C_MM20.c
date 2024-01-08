#include <stdio.h>

int main(void){
    int a;
    while(scanf("%d", &a)!= EOF){
        printf("%X\n", a);
    }
    return 0;
}