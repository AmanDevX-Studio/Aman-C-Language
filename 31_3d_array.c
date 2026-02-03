#include <stdio.h>
#include <stdlib.h>

int print3D(int a[2][2][2]) {
    int i, j, k;

    printf("3D Array:\n");
    for (i = 0; i < 2; i++) {
        printf("Layer %d:\n", i);
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int a[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    system("cls");
    print3D(a);

    return 0;
}
