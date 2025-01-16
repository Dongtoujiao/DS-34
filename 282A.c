#include <stdio.h>

int main(){

    long long n, ans = 0;
    char a, b, c;
    scanf("%lld", &n);
    for(long long i = 0; i < n; i++){
        scanf(" %c%c%c", &a, &b, &c);
        if(a == '+' || b == '+' || c == '+') ans++;
        else ans--;
    }
    printf("%lld\n", ans);

    return 0;
}