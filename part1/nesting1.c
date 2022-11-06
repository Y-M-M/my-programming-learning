#include <stdio.h>
int main()
{
    printf("请输入两个数字：");
    const int READY=24;
    int code=0;
    int count=0;
    scanf("%d %d",&code,&count);
    if(code==READY)
        if(count<40)
            printf("一切正常\n");
        else
            printf("请继续等待\n");
    else
        printf("请继续等待\n");
    return 0;
}