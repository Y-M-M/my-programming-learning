#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n );
    int i = 1;
    int j = n;
    int d = 0;

    if(n < 0){
        n = -n;
    }
    
    while(j > 9){
        i *= 10;
        j /= 10;
    }

    //printf("i = %d\n" , i);

    for(; i>0 ; i/=10 ){
        d = n / i ;
        n = n % i;
        switch(d){
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
            case 0:
                printf("zero");
                break;
        }
        if(i > 9){
            printf(" ");
        }
    }
    return 0;
}