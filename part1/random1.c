#include <stdio.h>
int main()
{
    printf("请输入x(x<6):");
    int x=0;
    scanf("%d",&x);
    int y=x+1,z=x+2,w=x+3,n=0;
    do{
        printf("%d ",x*100+y*10+z);
        printf("%d ",x*100+y*10+w);
        printf("%d ",x*100+z*10+y);
        printf("%d ",x*100+z*10+w);
        printf("%d ",x*100+w*10+y);
        printf("%d\n",x*100+w*10+z);
        x=y;
        y=z;
        z=w;
        w=x-1;
        n++;
    }while(n<4);
    return 0;
}
//给定不超过6的整数x
//x+1,x+2,x+3,x+4
//一行六个数，共输出四行
//手动进行内层循环