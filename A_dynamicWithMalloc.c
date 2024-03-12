// Use Malloc to create dynamic memory

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);


    arr = (int *)malloc(size * sizeof(int));

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

    free(arr);

    return 0;
}
