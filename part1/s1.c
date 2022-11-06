#include <stdio.h>
int main(){
    char ch1;
    ch1 = getchar();
    while((ch1 >= 'a' && ch1 <= 'z') || (ch1 <= 'Z' && ch1 >= 'A')){
        if(ch1 >= 'a' && ch1 <= 'z'){
            ch1 = (ch1 - 'a' + 3) % 26 + 'a';
            printf("%c", ch1);
        }
        else{
            ch1 = (ch1 - 'A' + 3) % 26 + 'A';
            printf("%c", ch1);
        }
        ch1 = getchar();
    }
    return 0;
}