#include <stdio.h>
int main(){
    int age;
    char sex , ch;
    float height;
    scanf("%d%c%f", &age ,&sex ,&height);
    printf("age = %d\nsex = %c\nheight = %f\n",age, sex, height);
    return 0;
}