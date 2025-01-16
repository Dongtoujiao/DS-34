#include <stdio.h>

int main(){

    long long n, ans = 1, a, b;
    scanf("%lld", &n);
    scanf("%lld", &a);
    n--;
    while(n--){
        scanf("%lld", &b);
        if(a != b){
            ans++;
            a = b;
        }
    }
    printf("%lld\n", ans);

    return 0;
}