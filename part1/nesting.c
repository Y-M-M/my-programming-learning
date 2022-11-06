#include <stdio.h>
int main()
{
    printf("请输入三个数字：");
    int a,b,c,max;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            max=a;
        else
            max=c;
    }
    else
    {
        if(b>c)
            max=b;
        else
            max=c;
    }
    printf("最大值为%d",max);
    return 0;
}