#include <stdio.h>
int main(){
    int age;
    char sex,ch;
    float height;
    scanf("%c%d%c%f", &ch, &age, &sex, &height);
    printf("ch = %c\nage = %d\nsex = %c\nheight = %f\n", ch, age, sex, height);
    return 0;
}