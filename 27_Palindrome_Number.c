#include <stdio.h>
#include <stdlib.h>

int palindrome(int n) {
    int rev = 0, rem, temp;
    temp = n;

    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
        return 1;   // true
    else
        return 0;   // false
}

int main() {
    int num;

    system("cls");

    printf("Enter number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome");

    return 0;
}
