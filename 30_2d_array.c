#include <stdio.h>
#include <stdlib.h>

int print2D(int a[3][3]) {
    int i, j;

    printf("2D Array:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    system("cls");
    print2D(a);

    return 0;
}
