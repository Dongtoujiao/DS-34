#include <stdio.h>

int main(){

    long long n, p;
    scanf("%lld", &n);
    long long arr[n + 1];
    for(long long i = 1; i <= n; i++){
        scanf("%lld", &p);
        arr[p] = i;
    }
    for(long long i = 1; i <= n; i++){
        printf("%lld ", arr[i]);
    }
    printf("\n");

    return 0;
}