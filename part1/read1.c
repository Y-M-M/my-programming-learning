#include <stdio.h>
void name(int i,int digit);
int test(int num);

int main(){

    int num = 0, digit = 0;
    scanf("%d", &num);
    if(num == 0){
        printf("ling\n");
        
    }
    else{
        if(num < 0){
            printf("fu ");
            num = -num;
        }
        digit = test(num);

        int i;
        for(; digit > 0; digit /= 10){
            i = num / digit;
            
            num %= digit;
            name(i, digit);
           
        }
        
        return 0;
    }
}

int test(int num){
    int digit = 1;
    for(; num > 10; num /= 10){
        digit *= 10;
    }
    return digit;
}

void name(int i,int digit){
    switch(i)
    {
        case 0:
            printf("ling");
            break;
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
    }
    if(digit > 1){
        printf(" ");
    }
    else{
        printf("\n");
    }
}