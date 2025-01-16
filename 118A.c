#include <stdio.h>

int main(){

    char a;
    while(scanf("%c", &a) != EOF){
        if(a < 'a') a += 'a' - 'A';
        if(a < 'a' || a > 'z') break;
        if(a != 'a' && a != 'o' && a != 'y' && a != 'e' && a != 'u' && a != 'i') printf(".%c", a);
    }

    return 0;
}