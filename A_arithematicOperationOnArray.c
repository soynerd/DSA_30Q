//Demonstrate arithmetic operations and array elements and their memory addresses.

#include <stdio.h>

int main() {
    int arr[] = {10, 20};

    printf("Array elements and their memory addresses:\n");
    for (int i = 0; i < 2; i++) {
        printf("Element %d: Value = %d, Address = %p\n", i, arr[i], (void*)&arr[i]);
    }


    int *ptr = arr; 

    printf("\nAdding 100 to each array element using pointer arithmetic:\n");
    for (int i = 0; i < 2; i++) {
        *(ptr + i) += 100;
        printf("Element %d: Value = %d\n", i, arr[i]);
    }


    printf("\nSubtracting 50 from each array element using array index notation:\n");
    for (int i = 0; i < 2; i++) {
        arr[i] -= 50;
        printf("Element %d: Value = %d\n", i, arr[i]);
    }


    printf("\nMultiplying each array element by 2 using pointer arithmetic:\n");
    for (int i = 0; i < 2; i++) {
        *(ptr + i) *= 2;
        printf("Element %d: Value = %d\n", i, arr[i]);
    }

    return 0;
}
