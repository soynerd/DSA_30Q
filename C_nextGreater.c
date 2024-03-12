//Print next greater element in a given array for every element using stack
#include <stdio.h>
#define MAX_SIZE 100

void next_greater_element(int arr[], int n) {
    int stack[MAX_SIZE], top = -1;
    int result[n];
    
    for (int i = 0; i < n; i++) {
        while (top != -1 && arr[i] > arr[stack[top]]) {
            int idx = stack[top--];
            result[idx] = arr[i];
        }
        stack[++top] = i;
    }

    while (top != -1) {
        int idx = stack[top--];
        result[idx] = -1;
    }

    printf("Next greater elements for each element in the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", arr[i], result[i]);
    }
}

int main() {
    int arr[] = {4, 5, 2, 25, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    next_greater_element(arr, n);
    return 0;
}
