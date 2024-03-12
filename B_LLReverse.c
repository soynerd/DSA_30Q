//Create a linked list and reverse it and print it

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void reverse(struct Node** head_ref) {
    struct Node *prev = NULL, *current = *head_ref, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    for (int i = 1; i <= 5; i++) {
        push(&head, i);
    }
    printf("Original linked list: ");
    printList(head);
    reverse(&head);
    printf("Reversed linked list: ");
    printList(head);
    // skiped freeing
    return 0;
}

