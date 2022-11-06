#include <stdio.h>
int main()
{
    printf("请输入一个整数x(x<=6):");
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
                if(i!=j&&j!=k&&i!=k){
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
                k++;
            }
            j++;
        }
        i++;
    }
    return 0;
}

//if的新使用方法
//当有多个条件时，不必嵌套，只需要在多个条件之间加“&&”即可