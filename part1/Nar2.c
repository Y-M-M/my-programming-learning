#include <stdio.h>
int main()
{
    printf("请输入位数n：");
    int n = 0, first = 1;
    scanf("%d", &n);

    int j = n;
    while(j > 1){
        first *= 10;
        j --;
    }
    //printf("n = %d \n , first = %d\n" , n , first);
    //可用printf来检验是否正确

    int i = first;
    while ( i < first * 10){
        int t = i;
        int sum = 0;
        //printf("t=%d\n",t);

        while(t>0)
        {
            int d = t % 10;
            t /= 10;
            int k = n;
            int m = 1;
            while ( k > 0 ){
                m *= d;

                //此处不能用d*=d，因为每次*d之后d的值会变化，不再是原来的d
                k -- ;
            }
            sum = sum + m;
            //printf("sum=%d\n",sum);
        }

        if( sum == i){
            printf("%d\n",i);
        }

        i++;
    }
}