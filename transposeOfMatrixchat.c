
#include <stdio.h>
#include <stdlib.h>

int** T(int** arr, int rows, int cols) {
    // Allocate memory for the transposed array
    int** arrT = (int**)malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; i++) {
        arrT[i] = (int*)malloc(rows * sizeof(int));
    }

    // Perform the transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arrT[j][i] = arr[i][j];
        }
    }
    return arrT;
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Allocate memory for the 2D array of pointers
    int** arr0 = (int**)malloc(2 * sizeof(int*));
    for (int i = 0; i < 2; i++) {
        arr0[i] = (int*)malloc(3 * sizeof(int));
        for (int j = 0; j < 3; j++) {
            arr0[i][j] = arr[i][j];
        }
    }

    int** arrT = T(arr0, 2, 3);

    // Print the transposed array
    printf("[ ");
    for (int i = 0; i < 3; i++) {
        printf("[ ");
        for (int j = 0; j < 2; j++) {
            printf("%d ", arrT[i][j]);
        }
        printf("] ");
    }
    printf("]\n");

    // Free allocated memory
    for (int i = 0; i < 2; i++) {
        free(arr0[i]);
    }
    free(arr0);

    for (int i = 0; i < 3; i++) {
        free(arrT[i]);
    }
    free(arrT);

    return 0;
}
