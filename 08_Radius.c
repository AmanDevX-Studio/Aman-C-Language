#include<stdio.h>

int main(){
    //find the area in any number
    float r, area;
    float pi = 3.15;

    printf("Enter Number : ");
    scanf("%f",&r);

    area = pi * r * r;
    printf("Redius is : %.2f\n",area);

    return 0;

}