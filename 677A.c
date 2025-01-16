#include <stdio.h>

int main(){

    long long n, h, a, ans = 0;
    scanf("%lld%lld", &n, &h);
    while(n--){
        scanf("%lld", &a);
        ans++;
        if(a > h) ans++;
    }
    printf("%lld\n", ans);

    return 0;
}