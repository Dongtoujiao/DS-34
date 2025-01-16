#include <stdio.h>

int main(){

    long long n, x_sum = 0, y_sum = 0, z_sum = 0, x, y, z;
    scanf("%lld", &n);
    while(n--){
        scanf("%lld%lld%lld", &x, &y, &z);
        x_sum += x;
        y_sum += y;
        z_sum += z;
    }
    if(x_sum == 0 && y_sum == 0 && z_sum == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}