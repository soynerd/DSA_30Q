//Create a link a list and delete a note from it

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void push(Node** head, int data) {
    Node* new_node = malloc(sizeof(Node));
    if (!new_node) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void deleteNode(Node** head, int key) {
    Node* temp = *head, *prev = NULL;
    if (temp && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (!temp) return;
    prev->next = temp->next;
    free(temp);
}

void printList(Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;
    for (int i = 5; i >= 1; i--)
        push(&head, i);
    printf("Original list: ");
    printList(head);
    deleteNode(&head, 3);
    printf("List after deletion: ");
    printList(head);
    while (head) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}

