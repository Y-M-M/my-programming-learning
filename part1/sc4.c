#include <stdio.h>
int main()
{
    int i;
    float f;
    char c;

    printf("input i,f\n");
    scanf("%d %f ", &i, &f);
    printf("input c\n");
    scanf("%c" , &c);
    //会直接要求scanf完，再输出下一个printf

    return 0;

}