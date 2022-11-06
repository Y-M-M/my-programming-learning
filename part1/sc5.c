#include <stdio.h>
int main()
{
    int i;
    float f;
    char c;
    printf("input i,f:\n");
    scanf("%d %f", &i, &f);
    getchar();
    //有利于将缓冲区的空格读入
    printf("inpur c:\n");
    scanf("%c", &c);
    printf("i = %d\nf = %f\nc=%c\n", i, f, c);
    return 0;
}