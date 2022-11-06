#include <stdio.h>
int main(){
    printf("请输入所需的位数n：");
    int n;
    scanf("%d",&n);
    int first=1;
    for( ; n> 1 ; n--){
        first *= 10;
    }
    printf("first=%d\n",first);

    //让计算机将输入的n转化成first

    int i=first;

    //first不能变，要定义新的变量

    while(i<first*10){
        int t=i;
        int a=first;
        int d=0;

        while(a>0){
            int b=t/a;
            
            t%=a;
            a/=10;
            d+=b*b*b;
            
        }

        if(d==i){
            printf("%d\n",d);
            
        }
        

        i++;
    }

    return 0;
}
//考虑清楚，搞清楚每个量是干什么的
//看清循环后每个量的变化
//考虑重新输入时每个量是多少