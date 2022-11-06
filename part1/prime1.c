#include <stdio.h>
int main()
{
    printf("请输入一个整数：");
    int prime;
    int n=0,i=0;
    scanf("%d",&prime);
    for(i=2;i<prime;i++){
        int reminder=prime%i;
        if(reminder==0){
           n++;
            break;
        }
    }
    if(n==0){
        printf("%d是素数\n",prime);
    }
    else{
        printf("%d是合数\n",prime);
    }
    return 0;
}