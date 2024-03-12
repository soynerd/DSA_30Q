#include <stdio.h>

void swap(int *a, int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int partition(int *arr, int s, int e)
{

    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + count;
    swap(&arr[pivotIndex], &arr[s]);

    int i = s, j = e; 

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {

            swap(&arr[i++], &arr[j--]);
        }
    }

    return pivotIndex;
}


void quickSort(int *arr, int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

    // partition
    int partitionIndex = partition(arr, s, e);

    // recusive call
    quickSort(arr, s, partitionIndex - 1); // for sort the left array
    quickSort(arr, partitionIndex + 1, e); // for sort the right array
}

int main(int argc, char const *argv[])
{

    int arr[] = { 9, -3, 5, 2, 6, 8, -6, 1, 3 };
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);

    printf("Sorted Array: \n");

    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}