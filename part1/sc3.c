#include <stdio.h>
int main(){
    int i;
    float f;
    char c;
    
    printf("input i , f\n");
    scanf("%d %f", &i, &f);
    printf("input c\n");
    //scanf不会停，会一直读下去，将换行读入c
    scanf("%c", &c);
    printf("the result is:\n");
    printf("i = %d\nf = %f\nc=%c\n", i, f, c);
    return 0;
}