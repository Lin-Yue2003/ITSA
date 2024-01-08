#include <stdio.h>
#define larger(x,y) (x>=y)? 1:0 
int f(int a,int b){
    if (a%b == 0) return b;
    return f(b,a%b);
}
void swap(int a, int b){
    int temp = a; a = b; b= temp;
}
int main(void){
    int a, b;
    while (scanf("%d%d",&a,&b)!=EOF){
        if (!larger(a,b)) swap(a,b);
        printf("%d\n", f(a,b));
    }
    return 0;
}