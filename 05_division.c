#include <stdio.h>

int main()
{
    int a, b, divide;
    system("cls");

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    divide = a / b;

    printf("Division of two numbers Remainder is : %d\n", divide);

    return 0;
}