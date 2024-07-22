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
int size(node *head)
{
    int count = 1;
    if (head == 0)
    {
        return 0;
    }
    else
    {
        node *temp = head;
        while (temp->next != 0)
        {
            count++;
            temp = temp->next;
        }
    }
    return count;
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
        temp->next = new_node;
    }
    return head;
}
node *insert_atLast(node *head)
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
        temp->next = new_node;
    }
    return head;
}
node *ins_first(node *head)
{
    node *temp = head, *new_node;
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    new_node = memory();
    new_node->next = temp;
    new_node->data = num;
    // head=new_node;
    return new_node;
}
node *ins_at_pos(node *head)
{

    node *temp = head, *temp2, *new_node;
    int num, pos;
    printf("Enter the number: ");
    scanf("%d", &num);
    int siz = size(head);
    printf("Enter the positon you want to enter: ");
    scanf("%d", &pos);
    if (pos > siz)
    {
        printf("\nYou are trying to access an out-of-range element.\n");
    }
    else
    {
        new_node = memory();
        new_node->data = num;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = new_node;
        new_node->next = temp2;
    }

    return head;
}
node *ins_aft_pos(node *head)
{
    node *temp = head, *temp2, *new_node;
    int num, pos;
    int siz = size(head);
    printf("Enter the positon you want to enter: ");
    scanf("%d", &pos);
    if (pos > siz)
    {
        printf("\nYou are trying to access an out-of-range element.\n");
    }
    else
    {
        printf("Enter the number: ");
        scanf("%d", &num);
        new_node = memory();
        new_node->data = num;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = new_node;
        new_node->next = temp2;
    }

    return head;
}
node *ins_bef_pos(node *head)
{
    node *temp = head, *temp2, *new_node;
    int num, pos;

    int siz = size(head);
    printf("Enter the positon you want to enter: ");
    scanf("%d", &pos);
    if (pos > siz)
    {
        printf("\nYou are trying to access an out-of-range element.\n");
    }
    else if (pos == 1)
    {
        return ins_first(head);
    }
    else
    {
        printf("Enter the number: ");
        scanf("%d", &num);
        new_node = memory();
        new_node->data = num;
        for (int i = 1; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = new_node;
        new_node->next = temp2;
    }

    return head;
}
node *del_last(node *head){
    node * temp=head;
    while(temp->next->next!=0){
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}
void main()
{

    int choice;
    int count = 0;
    node *head = 0;
    do
    {
        printf("\nPress 0 for exit\nPress 1 for insert\n Press 2 for insert at last \n Press 3 for insert at first \n Press 4 for insert at position \n Press 5 for insert after position \nPress 6 insert before postion\n Press 7 for Deleting last node \n Press 8 Delete All\n Press 9 for deleting certain nodes\n Press 10 for Displaying all nodes\n Press 11 for Counting the nodes  ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = insert(head);
            break;
        case 2:
            head = insert_atLast(head);
            break;
        case 3:
            head = ins_first(head);
            break;
        case 4:
            head = ins_at_pos(head);
            break;
        case 5:
            head = ins_aft_pos(head);
            break;
        case 6:
            head = ins_bef_pos(head);
            break;
        case 7:
            head=del_last(head);
        case 10:
            display(head);
            break;
        case 11:
            count = size(head);
            printf("\nThe size of the linked list is : %d\n", count);
            break;
        default:
            break;
        }
    } while (choice != 0);
}