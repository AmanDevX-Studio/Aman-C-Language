#include<stdio.h>

float multiply (float a , float b){ // predefine fucntion
    return a*b;
}

int main(){

    float a = 2.12;
    float b = 3.88;
    float product;

    product =  multiply(a,b);
    printf("the product of two nummber is : %.3f ",product);
    return 0;

}