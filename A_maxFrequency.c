//Find the element having maximum frequency in an array
#include <stdio.h>



int main() {
    int arr[] = {10, 5, 20, 15, 30, 10, 20, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int freq[1000] = {0};


    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    int maxFreqElement = arr[0];
    int maxFreqCount = freq[arr[0]]; 

    for (int i = 1; i < size; i++) {
        if (freq[arr[i]] > maxFreqCount) {
            maxFreqCount = freq[arr[i]];
            maxFreqElement = arr[i];
        }
    }

    printf("Element with maximum frequency: %d\n", maxFreqElement);
    printf("Frequency of the element: %d\n", maxFreqCount);

    return 0;
}
