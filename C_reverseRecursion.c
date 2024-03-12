#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

// Define Stack structure
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Initialize stack
void initialize(struct Stack *s) {
    s->top = -1;
}

// Check if the stack is empty
int is_empty(struct Stack *s) {
    return s->top == -1;
}

// Check if the stack is full
int is_full(struct Stack *s) {
    return s->top == MAX_SIZE - 1;
}

// Push an element onto the stack
void push(struct Stack *s, int value) {
    if (is_full(s)) {
        printf("Stack is full\n");
        return;
    }
    s->items[++(s->top)] = value;
}

// Pop an element from the stack
int pop(struct Stack *s) {
    if (is_empty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->items[(s->top)--];
}

// Recursive function to insert an element at the bottom of the stack
void insert_at_bottom(struct Stack *s, int value) {
    // Base case: if the stack is empty, push the element onto the stack
    if (is_empty(s)) {
        push(s, value);
    } else {
        // Recursive step: pop all elements from the stack and insert the element at the bottom
        int temp = pop(s);
        insert_at_bottom(s, value);
        push(s, temp);
    }
}

// Recursive function to reverse the stack
void reverse_stack(struct Stack *s) {
    // Base case: if the stack is not empty, pop an element and recursively reverse the remaining stack
    if (!is_empty(s)) {
        int temp = pop(s);
        reverse_stack(s);
        // Insert the popped element at the bottom of the stack
        insert_at_bottom(s, temp);
    }
}

// Function to display the elements of the stack
void display(struct Stack *s) {
    if (is_empty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

int main() {
    struct Stack s;
    initialize(&s);

    // Push elements onto the stack
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);
    push(&s, 5);

    printf("Original stack:\n");
    display(&s);

    // Reverse the stack
    reverse_stack(&s);

    printf("\nReversed stack:\n");
    display(&s);

    return 0;
}
