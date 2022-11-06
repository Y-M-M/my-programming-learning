#include <stdio.h>
int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int group[10000];
    for(int i = 0; i < n; i ++){
        scanf("%d", &group[i]);
    }
    int cnt = 0;
    for(int i = 1; i < n - 1; i ++){
        if(group[i] < group[i + 1] && group[i] <= group[i - 1]){
            cnt ++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}