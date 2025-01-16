#include <stdio.h>

int main(){

    long long w;
    scanf("%lld", &w);
    if(w < 4 || w % 2 == 1){
        printf("NO\n");
    }
    else printf("YES\n");

    return 0;
}