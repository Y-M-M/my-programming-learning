#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number=rand()%100+1;
    printf("我已经想好了一个1到100之间的数\n");
    int a=0,count=0;
    printf("请输入你猜测的数：");
    scanf("%d",&a);
    do{
        if(a>number){
            printf("你猜测的数太大了\n");
            printf("请重新猜测一个数字");
            scanf("%d",&a);
            count++;
        }
        else if(a<number){
            printf("你猜的数太小了\n");
            printf("请重新猜测一个数字\n");
            scanf("%d",&a);
            count++;
        }
        else
            count=1;
        }
    while(a!=number);
    

    printf("猜过%d次后，恭喜你答对了！",count);

    return 0;
}