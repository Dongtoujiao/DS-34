#include <stdio.h>

int main(){

    long long k, n, w, ans;
    scanf("%lld%lld%lld", &k, &n, &w);
    k = k * (((w + 1) * w) / 2);
    ans = k - n;
    if(ans < 0) ans = 0;
    printf("%lld\n", ans);

    return 0;
}