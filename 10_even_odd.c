#include<stdio.h>

int main (){
    //check even or odd number
    int n;

    printf("Enter number : ");
    scanf("%d",&n);

    if(n %2 == 0){
        printf("Even Number : %d",n);
    }else{
        printf("Odd Number : %d",n);
    }


}