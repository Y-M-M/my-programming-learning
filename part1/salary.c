#include <stdio.h>
int main()
{
    const double RATE=8.25;
    const int STANDARD=40;
    double pay=0.0;
    int hours;
    printf("请输入工作时间：");
    scanf("%d",&hours);
    printf("\n");

    if(hours>STANDARD)
        pay=STANDARD*RATE+(hours-STANDARD)*1.5*RATE;
    else
        pay=hours*RATE;
    printf("工资为%lf",pay);

    return 0;
}