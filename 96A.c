#include <stdio.h>

int main(){

    char a;
    long long zero = 0, one = 0, ans = 0;
    while(scanf("%c", &a) != EOF){
        if(a == '0'){
            zero++;
            one = 0;
            if(zero == 7) ans = 1;
        }
        else if(a == '1'){
            one++;
            zero = 0;
            if(one == 7) ans = 1;
        }
    }
    if(ans == 1) printf("YES\n");
    else printf("NO\n");

    return 0;
}