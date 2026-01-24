#include<stdio.h>

float fahreneit_to_celcius(float f){
return (f - 32.0)* 5.0/9.0;
}


int main(){

float temp_f = (98.6);
float temp_c = fahreneit_to_celcius (temp_f);

printf("Fahreneit : %.2f\n",temp_f);
printf("fahreneit_to_celcius : %.2f\n",temp_c);

return 0;
}