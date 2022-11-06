#include <stdio.h>
int main()
{
    int a=0;
    int b=0;

    printf("请输入a,b:");
    scanf("%d,%d",&a,&b);

    int c=a-b;
    printf("%d-%d=%d",a,b,c);
    return 0;
}