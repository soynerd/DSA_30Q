//Check if a given number is present in the array or not

#include <stdio.h>

int main() {
    int arr[] = {10, 5, 20, 15, 30}; // Array of size 5
    int num_to_find = 15;
    int found = 0;

    int size = sizeof(arr) / sizeof(arr[0]); 

    for (int i = 0; i < size; i++) {
        if (arr[i] == num_to_find) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d is present in the array.\n", num_to_find);
    } else {
        printf("%d is not present in the array.\n", num_to_find);
    }

    return 0;
}
