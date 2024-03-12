#include <stdio.h>

void findMinandMax(int *arr, int s, int e, int *result);

int main()
{

    int arr[10] = {2, 5, 3, 2, 5, 7, 8, 1, 9, 12};
    int ans[2];

    findMinandMax(arr, 0, 9, ans);

    printf("The maximum element in this array is: %d\n", ans[0]);
    printf("The minimum element in this array is: %d\n", ans[1]);

    return 0;
}

void findMinandMax(int *arr, int s, int e, int *result)
{

    // Base case
    if (s == e)
    {
        result[0] = arr[s];
        result[1] = arr[s];
        return;
    }

    int m = s + (e - s) / 2;
    int leftArrayMinMax[2];
    int rightArrayMinMax[2];
    findMinandMax(arr, s, m, leftArrayMinMax);
    findMinandMax(arr, m + 1, e, rightArrayMinMax);

    if (leftArrayMinMax[0] > rightArrayMinMax[0])
    {
        result[0] = leftArrayMinMax[0];
    }
    else
    {
        result[0] = rightArrayMinMax[0];
    }

    if (leftArrayMinMax[1] < rightArrayMinMax[1])
    {
        result[1] = leftArrayMinMax[1];
    }
    else
    {
        result[1] = rightArrayMinMax[1];
    }
}
