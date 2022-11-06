#include <stdio.h>
int main()
{
    int prime=0;
    printf("请输入一个整数：");
    scanf("%d",&prime);
    int i=prime,reminder=0,n=0;
    do{
        i--;
        reminder=prime%i;
        if(reminder==0)
            n++;
    }while(i>2);
    if(n>0)
        printf("%d是合数\n",prime);
    else
        printf("%d是素数\n",prime);
    return 0;
}