#include <stdio.h>

int main(){

    long long n;
    scanf("%lld", &n);
    printf("I hate ");
    n--;
    for(long long i = 0; i < n; i++){
        if(i % 2 == 0) printf("that I love ");
        else printf("that I hate ");
    }
    printf("it\n");

    return 0;
}