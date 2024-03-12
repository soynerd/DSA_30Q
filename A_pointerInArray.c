//Demonstrate pointer operations in an array.

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer pointing to the first element of the array

    // Displaying array elements using pointer arithmetic
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    // Incrementing pointer to access next elements
    ptr++; // Move the pointer to the next element
    printf("\nAfter incrementing pointer:\n");
    printf("Element 0: %d\n", *ptr); // Should print the second element (20)

    // Decrementing pointer to access previous elements
    ptr--; // Move the pointer back to the first element
    printf("\nAfter decrementing pointer:\n");
    printf("Element 0: %d\n", *ptr); // Should print the first element (10)

    // Using pointer subtraction to find the difference between two elements
    int *ptr1 = &arr[2];
    int *ptr2 = &arr[4];
    printf("\nDifference between elements at index 2 and index 4: %ld\n", ptr2 - ptr1);

    return 0;
}
