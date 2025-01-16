#include <stdio.h>

int main(){

    long long n;
    scanf("%lld", &n);
    long long ans = (n / 2) - n * (n & 1);
    printf("%lld\n", ans);

    return 0;
}