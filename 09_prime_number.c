#include<stdio.h>

int main(){
    // check prime number and not prime  number
    int n, i;
    int isPrime = 0;

    printf("Enter Number : ");
    scanf("%d",&n);

    if(n<=1){
        printf("NOT Prime");
        return 0;
    }
    for(i = 2; i < n; i++){
        if(n % i == 0){
        isPrime = 1;
        break;
        };
    }
    if(isPrime == 0){
        printf("Prime number");
    }else{
        printf("NOT prime number");
    }
    return 0;

}