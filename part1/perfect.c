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

int st[MAXN], top;

int isPerfect(int n){
    int sum = top = 0;
    if(n == 1){
        return 0;
    }
    for(int i = 1; i <= n/2; i ++){
        if(n % i == 0) sum += i, st[++top] = i;
    }
    return sum == n;
}

void printPerfect(int n){
    printf("%d=", n);
    for(int i = 1; i <= top; i ++){
        printf("%d%c", st[i], "+\n"[i == top]);
    }
}