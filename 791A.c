#include <stdio.h>

int main(){

    long long a, b, ans = 0;
    scanf("%lld%lld", &a, &b);
    while(a <= b){
        a *= 3;
        b *= 2;
        ans++;
    }
    printf("%lld\n", ans);

    return 0;
}