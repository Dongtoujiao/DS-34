#include <stdio.h>

int main(){

    long long num = 0;
    char a;
    while(scanf("%c", &a) != EOF){
        if(num == 0){
            if(a > 'Z') a -= ('a' - 'A');
        }
        printf("%c", a);
        num++;
    }

    return 0;
}