// Question -> Demonstrate different ways of referring array elements and their address


#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Using array index notation to access elements
    printf("Using array index notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d, Address: %p\n", i, arr[i], (void*)&arr[i]);
    }

    // Using pointer arithmetic to access elements
    printf("\nUsing pointer arithmetic:\n");
    int *ptr = arr; // Pointing to the first element of the array
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d, Address: %p\n", i, *(ptr + i), (void*)(ptr + i));
    }

    // Using array name as a pointer
    printf("\nUsing array name as a pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d, Address: %p\n", i, *(arr + i), (void*)(arr + i));
    }

    return 0;
}
