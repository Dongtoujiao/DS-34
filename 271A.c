#include <stdio.h>

int main(){

    long long y;
    scanf("%lld", &y);
    while(1){
        y++;
        long long a = y % 10;
        long long b = (y / 10) % 10;
        long long c = (y / 100) % 10;
        long long d = y / 1000;
        if(a != b && a != c && a != d && b != c && b != d && c != d){
            printf("%lld\n", y);
            return 0;
        }
    }

    return 0;
}