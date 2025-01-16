#include <stdio.h>

int main(){

    long long n, ans = 0, a, b, c;
    scanf("%lld", &n);
    for(long long i = 0; i < n; i++){
        scanf("%lld%lld%lld", &a, &b, &c);
        if(a + b + c > 1) ans++;
    }
    printf("%lld\n", ans);

    return 0;
}