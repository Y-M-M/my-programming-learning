#include <stdio.h>
int main()
{
    printf("请输入一个整数x(x<=6):");
    int x=0;
    scanf("%d",&x);
    int i,j,k;
    int cent=0;
    for(i=x;i<=x+3;i++){
        for(j=x;j<=x+3;j++){
            for(k=x;k<=x+3;k++){
                if(i!=j&&i!=k&&j!=k){
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
        }
    }
    return 0;
}

//让前五个数之后输出空格，最后一个数之后输出回车的方法