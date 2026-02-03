#include <stdio.h>
#include <stdlib.h>

int armstrong(int n) {
    int rem, sum = 0, temp;
    temp = n;

    while (n > 0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if (temp == sum)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    system("cls");

    printf("Enter number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
