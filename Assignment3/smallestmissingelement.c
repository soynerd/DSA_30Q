#include <stdio.h>

int findSmallestMissing(int *nums, int start, int end );

int main(int argc, char const *argv[])
{
    int arr[] = { 0, 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int start = 0;
    int end = n - 1;
 
    printf("The smallest missing element is %d", findSmallestMissing(arr, start, end));
    return 0;
}


int findSmallestMissing(int *nums, int start, int end ){

    //base case 
    if(start > end){
        return start;
    }

    // recursive relation

    int mid = start + (end - start)/2;

    if(nums[mid] == mid){
        // check right side 
       return findSmallestMissing(nums, mid+1, end);

    }else {
        //check left side 

        return findSmallestMissing(nums, start, mid-1);
    }
}