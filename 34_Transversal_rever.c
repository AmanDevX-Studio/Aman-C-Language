#include <stdio.h>
#include <stdlib.h>

int reverseNum(int n){
    int rev = 0;
    while(n > 0){
        rev = rev*10 + (n%10);
        n = n/10;
    }
    return rev;
}

int main(){
    system("cls");
    printf("Reverse = %d", reverseNum(1234));
    return 0;
}