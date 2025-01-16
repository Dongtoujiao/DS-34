#include <stdio.h>

int main(){

    long long n, m;
    scanf("%lld%lld", &n, &m);
    long long ans = (n * m) / 2;
    printf("%lld\n", ans);

    return 0;
}