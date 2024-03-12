#include <stdio.h>

int divideandconqure(int a, int b);

int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    int ans = divideandconqure(a, b);
    printf("a^b is %d\n", ans);

    return 0;
}

int divideandconqure(int a, int b)
{

    // base case
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }

    // recursive call

    int ans = divideandconqure(a, b / 2) * divideandconqure(a, b / 2);

    if (b % 2 == 0)
    {

        return ans;
    }
    else
    {

        return a * ans;
    }
}