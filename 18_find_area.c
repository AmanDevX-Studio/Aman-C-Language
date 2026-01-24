#include<stdio.h>

int main(){

    int L,B,total;

    printf("Enter Length : ");
    scanf("%d",&L);

    printf("Enter breath : ");
    scanf("%d",&B);

    total = L*B;
    printf("Area of rectangle is : %d\n ",total);

    return 0;

}