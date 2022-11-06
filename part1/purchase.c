#include <stdio.h>
#define single 19
int main(int argc, char const *argv[]){
    int ten, one, n;
    scanf("%d %d", &ten, &one);
    n = (ten * 10 + one)/ single;
    printf("%d\n", n);
    return 0;
}