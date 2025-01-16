#include <stdio.h>

int main(){

    long long a, b, num;
    for(long long i = 0; i < 5; i++){
        for(long long j = 0; j < 5; j++){
            scanf("%lld", &num);
            if(num == 1){
                a = i;
                b = j;
            }
        }
    }
    if(a > 2) a = a - 2;
    else a = 2 - a;
    if(b > 2) b = b - 2;
    else b = 2 - b;
    long long ans = a + b;
    printf("%lld\n", ans);

    return 0;
}