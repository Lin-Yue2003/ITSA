#include <stdio.h>
int main(void){
    int n;
    while(scanf("%d",&n)!=EOF){
        int sum = 0;
        for(int i = 1; i <= n;i++){
            if (i%6==0 &&i%12!=0)
                sum+=i;
        }
        printf("%d\n",sum);

    }
    return 0;
}