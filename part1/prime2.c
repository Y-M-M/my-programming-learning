#include <stdio.h>
int main()
{
    printf("请输入一个整数：");
    int prime=0;
    scanf("%d",&prime);
    int reminder=0,x=0;
    for(int i=2;i<prime;i++){
        reminder=prime%i;
        if(reminder>0){
            continue;
        }
        x++;
        printf("%d\n",i);
        }
    if(x>0)
        printf("该数为合数\n");
    else
        printf("该数为素数\n");
    return 0;
}