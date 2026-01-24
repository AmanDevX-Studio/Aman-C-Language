#include<stdio.h>

float SimpInt(float a, float b, float c){
    return (a*b*c)/100;
}
int main(){
    float a = 10000, b = 12, c = 1, SiInt;
    SiInt = SimpInt(a, b, c);
    printf("Simple Intrest Is : %.2f",SiInt);

    return 0;
}