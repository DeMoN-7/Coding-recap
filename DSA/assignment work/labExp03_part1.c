#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int data;
    struct nodetype *next;

}node;
node *memory()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->next = 0;
    return temp;
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
node *del_last(node *head){
    node * temp=head;
    int siz=size(head);
    if(siz==1){
        head=0;
        return head;
    }
    else{

    while(temp->next->next!=0){
        temp=temp->next;
    }
    temp->next=NULL;
    }
    return head;
}
node * del_first(node * head){
    return head->next;
}
node * del_certain_node(node * head){
    node * temp=head;
    int n;
    printf("Enter the index of node you want to delete");
    scanf("%d",&n);
    if(n>size(head)){
        printf("Index out of bound");
        return head;
    }
    if(n==size(head)){
        return del_last(head);
    }
    else{
        for(int i=1;i<n-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
    return head;
}
void main(){
    node *head=0;
    int choice;
    do
    {
        printf("\nPress 0 for exit\nPress 1 for insert at last \n Press 2 for insert at first \n Press 3 for insert at position \n Press 4 for Deleting last node \n Press 5 Delete First node\n Press 6 for deleting certain nodes\n Press 7 for Displaying all nodes\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = insert_atLast(head);
            break;
        case 2:
            head = ins_first(head);
            break;
        case 3:
            head = ins_at_pos(head);
            break;
        case 4:
            head=del_last(head);
            break;
        case 5:
            head=del_first(head);
            break;
        case 6:
            head=del_certain_node(head);
        case 7:
            display(head);
            break;
        default:
            break;
        }
    } while (choice != 0);
}