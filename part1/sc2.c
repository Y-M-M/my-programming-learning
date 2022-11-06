#include <stdio.h>
int main(){
    int age;
    char sex;
    float height;
    float weight;
    scanf("%d%c%f%f", &age, &sex, &height ,&weight);
    //每一个百分号会读取符合类型的数，读到不能读为止
    printf("age = %d\nsex = %c\nheight = %f\nweight = %f", age, sex, height, weight);
    return 0;
}