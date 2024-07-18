#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

void display(node *head)
{
    node *temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
node *ins_atLast(node *head)
{
    node *temp = head, *new_node;
    new_node = (node *)malloc(sizeof(node));
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    new_node->next=0;
    new_node->data=num;
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
        temp->next = new_node;
    }
    return head;
}
void main()
{
    
    node *head = 0;
    head=ins_atLast(head);
    head=ins_atLast(head);
    head=ins_atLast(head);
    display(head);
}
