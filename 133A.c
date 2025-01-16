#include <stdio.h>


int main(){

    char a;
    long long ans = 0;
    while(scanf("%c", &a) != EOF){
        if(a == 'H' || a == 'Q' || a == '9') ans = 1;
    }
    if(ans == 1) printf("YES\n");
    else printf("NO\n");

    return 0;
}