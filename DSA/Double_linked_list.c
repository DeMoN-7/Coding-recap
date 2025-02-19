#include <stdio.h>
#include <stdlib.h>
typedef struct nodetype
{
    struct nodetype *next;
    int data;
    struct nodetype *back;
} node;
node *memory()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->next = 0;
    temp->back = 0;
    return temp;
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
        return head;
    }
    else
    {
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->back = temp;
    }
    return head;
}
node *delete_last(node *head)
{
    node *temp = head;
    
    
        while (temp->next->next != 0)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    
    return head;
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
void display_reverse(node *head)
{
    node *temp = head;
    if (head == 0)
    {
        printf("Link list is empty: \n");
    }
    else
    {
        printf("Reversed Link list :");
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        while (temp->back != 0)
        {
            printf("%d\t", temp->data);
            temp = temp->back;
        }
        printf("%d\t", temp->data);
    }
}
void main()
{
    node *head = 0;
    head = insert(head);
    head = insert(head);
    head = insert(head);
    display(head);
    display_reverse(head);
    head = delete_last(head);
    display(head);
    head = delete_last(head);
    display(head);
}