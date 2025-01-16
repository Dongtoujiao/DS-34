#include <stdio.h>

int main(){

    long long n, A = 0, D = 0;
    char a;
    scanf("%lld", &n);
    while(n--){
        scanf(" %c", &a);
        if(a == 'A') A++;
        else D++;
    }
    if(A > D) printf("Anton\n");
    else if(D > A) printf("Danik\n");
    else printf("Friendship\n");

    return 0;
}