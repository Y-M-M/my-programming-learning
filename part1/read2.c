#include <stdio.h>
int sum(int A, int B);
void read(int A, int B);

int main(){
    int A, B, Sum;
    scanf("%d %d", &A, &B);
    read(A,B);
    Sum = sum(A, B);
    printf("Sum = %d\n", Sum);
}

void read(int A, int B){
    int cent = 0;
    for(;A <= B; A ++){
        if(A < 0){
            printf("   %d", A);
        }
        else if(A < 10 && A >= 0){
            printf("    %d", A);
        }
        else if(A < 100 && A >= 10){
            printf("   %d", A);
        }
        else if(A == 100){
            printf("  %d", A);
        }
        cent ++;

        if(cent == 5){
            printf("\n");
            cent = 0;
        }
        else if(A == B){
            printf("\n");
        }
    }
}

int sum(int A, int B){
    int sum = 0;
    for(; A <= B; A ++){
        sum += A;
    }
    return sum;
}