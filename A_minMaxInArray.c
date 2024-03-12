//  Find the largest and smallest number in an array.

#include <stdio.h>

int main() {
    int arr[] = {10, 5, 20, 15, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest number in the array: %d\n", largest);
    printf("Smallest number in the array: %d\n", smallest);

    return 0;
}
