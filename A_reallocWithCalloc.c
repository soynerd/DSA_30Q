//Use realloc to expand memory created by calloc and free entire created memory

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size, newSize;

    printf("Enter the initial size of the array: ");
    scanf("%d", &size);

    arr = (int *)calloc(size, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter additional size to expand the array: ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, (size + newSize) * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    printf("Enter %d additional elements:\n", newSize);
    for (int i = size; i < size + newSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of the expanded array:\n");
    for (int i = 0; i < size + newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
