#include <stdio.h>

int main(){

    long long n, ans = 0, p, q;
    scanf("%lld", &n);
    while(n--){
        scanf("%lld%lld", &p, &q);
        if(p + 1 < q) ans++;
    }
    printf("%lld\n", ans);

    return 0;
}