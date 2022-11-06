#include <stdio.h>
int main(){
    
    int a = 0;
    int b = 0;
    
    while(scanf("%d %d", &a, &b)!= EOF){
    
        printf("%d\n" , a + b);
        //看清题目要求，题目要求回车
    }
    return 0;
}