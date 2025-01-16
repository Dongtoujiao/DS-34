#include <stdio.h>

int main(){

    long long n, a, b;
    scanf("%lld", &n);
    while(n--){
        scanf("%lld%lld", &a, &b);
        long long ans = a % b;
        if(ans == 0) printf("0\n");
        else{
            ans = b - ans;
            printf("%lld\n", ans);
        }
    }

    return 0;
}