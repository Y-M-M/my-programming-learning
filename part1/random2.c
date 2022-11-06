#include <stdio.h>
int main()
{
    printf("请输入一个整数x(x<=6)：");
    int x=0;
    scanf("%d",&x);
    int i,j,k;
    i=x;
    int cent=0;
    while(i<=x+3){
        j=x;
        while(j<=x+3){
            k=x;
            while(k<=x+3){
                 
                    if(i!=j){
                        if(j!=k){
                            printf("%d%d%d",i,j,k);
                            cent++;
                            if(cent==6){
                                printf("\n");
                                cent=0;
                            }
                            else{
                                printf(" ");

                            }
                        }
                    
                }
                k++;
             }
            j++;
        }
        i++;
    }
    
    
}

//连续的if的使用
//while的嵌套
//无需固定某个数的值，只需要让他们在x～x+3之间变化，就可以组成由四个数中三个不重复数字组成的三位数
//一直都要用到初始的x的值：定义其他变量等于x，让其他变量来变