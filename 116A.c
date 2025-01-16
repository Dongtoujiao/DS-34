#include <stdio.h>

int main(){

    long long n, ans = 0, a, b, now = 0;
    scanf("%lld", &n);
    while(n--){
        scanf("%lld%lld", &a, &b);
        now -= a;
        now += b;
        if(now > ans) ans = now;
    }
    printf("%lld\n", ans);

    return 0;
}