#include <stdio.h>
#include<math.h>

int main()
{
    int a, b, modu;
    system("cls");

    printf("Enter The value : ");
    scanf("%d %d", &a, &b);

    modu = a % b;
    printf("The value of modulus is %d\n: ", modu);

    return 0;
}