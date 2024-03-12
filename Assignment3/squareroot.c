#include <stdio.h>
 

int findSqrt(int x);
 
int main(void)
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int ans = findSqrt(n);
    printf("Squareroot of %d is: %d\n", n, ans);
 
    return 0;
}

int findSqrt(int x)
{
    
    int i = 1;
    while (i*i <= x) {
        i++;
    }
 
    return i - 1;
}