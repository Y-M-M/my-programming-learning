#include <stdio.h>
int main()
{
    int x=0;
    int cnt=0;
    for(x=2;x<100;x++){
        int n=0,i=0;
        int reminder=0;
        for(i=2;i<x-1;i++){
            reminder=x%i;
            if(reminder==0){
                n++;
                break;
            }
        }
        if(n==0){
            printf("%d\n",x);
            cnt++;
        }
    }
    printf("\n");
    printf("在0到100之间共有%d个素数",cnt);
    return 0;
}