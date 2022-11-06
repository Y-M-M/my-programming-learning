#include <stdio.h>
int main(){
    char ch1;
    scanf("%c", &ch1);
    while( (ch1 <= 'z' && ch1 >= 'a') || (ch1 <= 'Z' && ch1 >= 'A')){
        if(ch1 < 'x' && ch1 >= 'a'){
            printf("%c", ch1 + 3);
        }
        else if(ch1 == 'x'){
            printf("a");
        }
        else if(ch1 == 'y'){
            printf("b");
        }
        else if(ch1 == 'z'){
            printf("c");
        }
        else if(ch1 < 'X' && ch1 >= 'A'){
            printf("%c", ch1 + 3);
        }
        else if(ch1 == 'X'){
            printf("A");
        }
        else if(ch1 == 'Y'){
            printf("B");
        }
        else if(ch1 == 'Z'){
            printf("C");
        }
        scanf("%c", &ch1);
    }
    printf("\n");
    return 0;
}