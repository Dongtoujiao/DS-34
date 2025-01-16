#include <stdio.h>

int main(){

    long long one = 0, two = 0, three = 0;
    char num;
    while(scanf("%c", &num) != EOF){
        if(num == '1') one++;
        else if(num == '2') two++;
        else if(num == '3') three++;
    }
    if(one != 0){
        printf("1");
        one--;
    }
    else if(two != 0){
        printf("2");
        two--;
    }
    else{
        printf("3");
        three--;
    }
    while(one--) printf("+1");
    while(two--) printf("+2");
    while(three--) printf("+3");
    printf("\n");

    return 0;
}