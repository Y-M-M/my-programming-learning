#include <stdio.h>
int main(int argc, char const *argv[]){
    int high, mid, low;
    for(high = 5; high <= 7; high ++){
        for(mid = 5; mid <= 7; mid ++){
            if(high != mid){
                for(low = 5; low <= 7; low ++){
                    if(low != high && low != mid){
                        printf("%d%d%d\n", high, mid, low);
                    }
                }
            }
        }
    }
    return 0;
}