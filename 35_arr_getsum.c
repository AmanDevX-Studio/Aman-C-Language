#include <stdio.h>
#include <stdlib.h>

int getSum(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++)
        sum += arr[i];
    return sum;
}

int main(){
    system("cls");

    int a[5] = {1,2,3,4,5};
    printf("Sum = %d", getSum(a,5));

    return 0;
}