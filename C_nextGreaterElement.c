// Print next greater element in a given array for every element using stack

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *stack) {
    stack->top = -1;
}

int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

void push(Stack *stack, int value) {
    if (!isFull(stack)) {
        stack->items[++stack->top] = value;
    } else {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
}

int pop(Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->items[stack->top--];
    } else {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
}

void printNextGreater(int arr[], int size) {
    Stack stack;
    initialize(&stack);

    // Push the first element onto the stack
    push(&stack, arr[0]);

    for (int i = 1; i < size; i++) {
        int next = arr[i];

        // If stack is not empty, then pop an element from stack.
        // If the popped element is smaller than next, then it's the next greater element for all elements
        // which are popped until a greater element is found or stack becomes empty.
        while (!isEmpty(&stack) && next > stack.items[stack.top]) {
            printf("%d --> %d\n", stack.items[stack.top], next);
            pop(&stack);
        }

        // Push next to stack
        push(&stack, next);
    }

    // For remaining elements in the stack, there are no next greater elements
    while (!isEmpty(&stack)) {
        printf("%d --> -1\n", stack.items[stack.top]);
        pop(&stack);
    }
}

int main() {
    int arr[] = {11, 13, 21, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Element --> Next Greater Element\n");
    printNextGreater(arr, size);
    return 0;
}
