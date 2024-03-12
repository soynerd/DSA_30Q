#include <stdio.h>

// Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the maximum element in an array using divide and conquer
int findMax(int arr[], int low, int high) {
    if (low == high) // Base case: If there is only one element
        return arr[low];
    
    int mid = (low + high) / 2; // Find the middle index
    
    // Recursively find the maximum element in the left and right halves of the array
    int leftMax = findMax(arr, low, mid);
    int rightMax = findMax(arr, mid + 1, high);
    
    // Return the maximum of the maximum elements of the left and right halves
    return max(leftMax, rightMax);
}

int main() {
    int arr[] = {7, 3, 9, 5, 1, 2, 8, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int maximum = findMax(arr, 0, n - 1);
    
    printf("Maximum element in the array: %d\n", maximum);
    
    return 0;
}
