#include <stdio.h>
#include <stdlib.h>
typedef struct nodetype
{
    struct nodetype *next;
    int data;
} node;

node *memory()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->next = 0;
    return temp;
}
void display(node *head)
{
    printf("\n\tLink list:-\n");
    node *temp = head;
    if (head == 0)
    {
        printf("Link list is empty: \n");
    }
    else
    {
        while (temp->next != 0)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
            printf("%d\t", temp->data);

    }
    printf("\n");
}
node *insert(node *head)
{
    node *temp = head, *new_node;
    new_node = memory();
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    new_node->data = num;
    if (head == 0)
    {
        head = new_node;
    }
    else
    {
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next= new_node;
    }
    return head;
}

void main()
{

    int choice;
    node *head = 0;
    do
    {
        printf("\nPress 0 for exit\nPress 1 for insert\n Press 2 for insert at last \n Press 3 for insert at first \n Press 4 for insert at position \n Press 5 for insert after position \nPress 6 insert before postion\n Press 7 for Deleting last node \n Press 8 Delete All\n Press 9 for deleting certain nodes\n Press 10 for Displaying all nodes ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = insert(head);
            break;
        case 10:
            display(head);
            break;
        default:
            break;
        }
    } while (choice != 0);
}