#include <stdio.h>

int main(){

    long long n, ans = 0, a;
    scanf("%lld", &n);
    while(n--){
        scanf("%lld", &a);
        ans += a;
    }
    if(ans == 0) printf("EASY\n");
    else printf("HARD\n");

    return 0;
}