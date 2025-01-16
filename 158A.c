#include <stdio.h>

int main(){

    long long n, k;
    scanf("%lld%lld", &n, &k);
    k--;
    long long arr[n];
    for(long long i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }
    long long min = arr[k];
    if(min == 0) min++;
    long long ans = 0;
    for(long long i = 0; i < n; i++){
        if(arr[i] >= min) ans++;
    }
    printf("%lld\n", ans);

    return 0;
}