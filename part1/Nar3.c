#include <stdio.h>
int main()
{
    int m , n;
    while(scanf("%d %d", &m , &n)!=EOF){
        
        int num = 0;
        

        while(m <= n){
            int b = 1;
            int sum = 0;
            int i = m;

            while(i > 0){
                    
                b = i % 10;
                sum = sum + b * b * b;
                i = i / 10;
            }

            if(sum == m){
                    
                if(num==0)
                {
                    printf("%d", m);
                    num++;
                }
                else
                {
                    printf(" %d",m);
                    num++;
                }
            }

            m++;
        }
        if(num > 0){
            printf("\n");
        }
        else if( num == 0){
            printf("no\n");
        }
    }
    return 0;
}
