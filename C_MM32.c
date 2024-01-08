#include <stdio.h>

int main(void){
    int n;
    while (scanf("%d", &n)!=EOF){
        int sum = 0, temp = n;
        sum += (temp/100)*(temp/100)*(temp/100);
        temp%=100;
        sum += (temp/10)*(temp/10)*(temp/10);
        temp %=10;
        sum +=temp*temp*temp;
        if (sum==n)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}