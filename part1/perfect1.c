#include <stdio.h>
#define MAXN 50005
int isPerfect(int);
void printPerfect(int);
int main(int argc, char const *argv[]){
    int a, b, count = 0;
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i ++){
        if(isPerfect(i)){
            printPerfect(i);
            count ++;
        }
    }
    printf("The total number is %d.\n", count);
    return 0;
}

int isPerfect(int n){
    
}