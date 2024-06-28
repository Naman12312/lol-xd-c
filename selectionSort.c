#include <stdio.h>
#include <stdlib.h>

void pop(int* arr, int* len, int j) {
    for (int i = j; i < *len - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*len)--;
}

int* selectionSort(int* arr, int len) {
    int* sortedArr = (int*)malloc(len * sizeof(int));
    if (!sortedArr) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < len; i++) {
        int min = arr[0];
        int argMin = 0;
        for (int j = 1; j < len - i; j++) { // reduce the range as elements are sorted
            if (arr[j] < min) {
                min = arr[j];
                argMin = j;
            }
        }
        sortedArr[i] = min;
        pop(arr, &len, argMin); // Correctly reduce the length and update arr
    }

    return sortedArr;
}

int main() {
    int arrStatic[] = {5, 3, 2, 4, 1, 423, 2, 3134, 23, 52};
    int len = sizeof(arrStatic) / sizeof(arrStatic[0]);

    int* arr = (int*)malloc(len * sizeof(int));
    if (!arr) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < len; i++) {
        arr[i] = arrStatic[i];
    }

    for (int i = 0; i < len; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    int* sortedArr = selectionSort(arr, len);
    printf("Sorted array:\n");
    for (int i = 0; i < sizeof(arrStatic) / sizeof(arrStatic[0]); i++) {
        printf("%d, ", sortedArr[i]);
    }
    printf("\n");

    free(arr);
    free(sortedArr);

    return 0;
}
