#include <stdio.h>
int main(int arge, char const *argv[]){
    char ch;
    
    while((ch = getchar())!= EOF){
        putchar(ch);
    }
    printf("EOF!");
    return 0;
}