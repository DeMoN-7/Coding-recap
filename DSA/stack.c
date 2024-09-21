#include <stdio.h>
#define max 5

int arr[max];
int top = -1;

void push(int n)
{
    if (top == max - 1)
    {
        printf("\nOverflow! Stack is full.\n");
    }
    else
    {
        top++;
        arr[top] = n;
        printf("Element %d pushed.\n", n);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow! Stack is empty.\n");
    }
    else
    {
        printf("Element %d removed.\n", arr[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("\nUnderflow! Stack is empty.\n");
    }
    else
    {
        printf("Top element: %d\n", arr[top]);
    }
}

void display()
{
    if (top == -1)
    {
        printf("\nStack is empty.\n");
    }
    else
    {
        printf("\nStack elements are: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting...\n");
            return 0;  // Exit the program
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}
