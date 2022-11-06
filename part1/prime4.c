#include <stdio.h>
int main()
{
    int x=2;
    int i=0,reminder=0,cnt=0,n;
    while(cnt<=50){
        for(i=2;i<x;i++){
            reminder=x%i;
            n=0;
            if(reminder==0){
                n++;
                break;
            }
        }
        if(n==0){
            printf("%d\n",x);
            cnt++;
        }
        
        x++;
    }
    return 0;
}