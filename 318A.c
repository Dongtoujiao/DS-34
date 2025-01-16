#include <stdio.h>

int main(){

    long long n, k, ans = 1;;
    scanf("%lld%lld", &n, &k);
    if(k > (n + 1) / 2){
        k -= (n + 1) / 2;
        ans = 2 * k;
    }
    else ans = -1 + 2 * k;
    printf("%lld\n", ans);

    return 0;
}