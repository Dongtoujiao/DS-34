#include <stdio.h>

int main(){

    long long n, ans = 0;
    scanf("%lld", &n);
    char a, b;
    scanf(" %c", &a);
    while(scanf("%c", &b) != EOF){
        if(a == b) ans++;
        a = b;
    }
    printf("%lld\n", ans);

    return 0;
}