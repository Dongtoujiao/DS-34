#include <stdio.h>

int main(){

    char a;
    long long ans = 0;
    while(scanf("%c", &a) != EOF){
        if(a == '4' || a == '7') ans++;
    }
    if(ans == 0){
        printf("NO\n");
        return 0;
    }
    while(ans){
        if(ans % 10 != 4 && ans % 10 != 7){
            printf("NO\n");
            return 0;
        }
        ans /= 10;
    }
    printf("YES\n");
    
    return 0;
}