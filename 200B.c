#include <stdio.h>

int main(){

    long long n;
    double sum, a;
    scanf("%lld", &n);
    for(long long i = 0; i < n; i++){
        scanf("%lf", &a);
        sum += a;
    }
    double ans = sum / n;
    printf("%lf\n", ans);

    return 0;
}