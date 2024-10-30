#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
    printf("%d pushed to stack\n", value);
}

void pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return;
    }
    printf("%d popped from stack\n", stack[top--]);
}

void peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element is %d\n", stack[top]);
}

int main() {
    pop();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

    peek();

    pop();
    peek();

    return 0;
}
