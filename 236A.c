#include <stdio.h>

int main(){

    char a;
    long long arr[26] = {0};
    while(scanf("%c", &a) != EOF){
        arr[a - 'a']++;
    }
    long long ans = 0;
    for(long long i = 0; i < 26; i++){
        if(arr[i] != 0) ans++;
    }
    if(ans % 2 == 0) printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");

    return 0;
}