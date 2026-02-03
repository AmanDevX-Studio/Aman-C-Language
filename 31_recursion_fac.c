#include <stdio.h>
#include <stdlib.h>

int fact(int n) {
    if (n == 1)
        return 1;          // base case
    return n * fact(n-1);  // recursive call
}

int main() {
    system("cls");
    printf("Factorial = %d", fact(5));
    return 0;
}
