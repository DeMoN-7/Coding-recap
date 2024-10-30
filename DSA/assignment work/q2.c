#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

int isEmpty() {
    return top == NULL;
}

void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("%d pushed to stack\n", value);
}

void pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return;
    }
    struct Node* temp = top;
    printf("%d popped from stack\n", top->data);
    top = top->next;
    free(temp);
}

void peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element is %d\n", top->data);
}

int main() {
    pop();
    push(10);
    push(20);
    push(30);
    peek();

    pop();
    peek();

    return 0;
}
