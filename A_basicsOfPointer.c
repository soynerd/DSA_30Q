// Question -> Demonstrate simple operations using pointers.

#include <stdio.h>

int main() {
    int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Value of num1: %d, Address of num1: %p\n", num1, (void*)&num1);
    printf("Value of num2: %d, Address of num2: %p\n", num2, (void*)&num2);

    printf("Value of num1 using pointer: %d\n", *ptr1);
    printf("Value of num2 using pointer: %d\n", *ptr2);

    int sum = *ptr1 + *ptr2;
    printf("Sum of num1 and num2 using pointers: %d\n", sum);

    *ptr1 = 30;
    *ptr2 = 40;
    printf("New value of num1 using pointer: %d\n", num1);
    printf("New value of num2 using pointer: %d\n", num2);

    return 0;
}
