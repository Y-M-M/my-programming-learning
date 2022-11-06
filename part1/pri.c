#include <stdio.h>
int main()
{
    int M , N;
    scanf("%d %d", &M,&N);
    if(M == 1){
        M++;
    }
    //1既不是素数也不是合数呀……

    int t=0;
    int sum=0; 
    //t要用于记录素数的个数，在大循环过程中一直改变，应在大循环外定义
    //sum同理
    while(M < N){
        int i=2;
        //每次内循环过程中i的值都会改变，但循环开始时均要求i的值为1
        int n=0;
        while(i < M){
            if(M % i == 0){
                n++;
                break;
                //break跳出循环，简化步骤
            }
            i++;
        }
        if(n == 0){
            t ++;
            sum += M;
            //printf("t = %d sum = %d" , t , sum);
        }

        M++;
    }
    
    printf("%d %d" , t , sum);
    
    return 0;
}