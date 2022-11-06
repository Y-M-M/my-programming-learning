#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    int num;
    //srand(time(0));
    srand(getpid());
    int cnt = 0;
    //printf("num = %d\nrand = %d\n", num, rand() % 10);
    for(int i = 1; i <= 100; i ++){
        printf("%d\t", rand() % 10);
        cnt ++;
        if(cnt % 10 == 0){
            printf("\n");
        }
    }
    return 0;
}