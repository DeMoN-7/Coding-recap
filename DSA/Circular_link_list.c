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
    temp->next = NULL;
    return temp;
}
node *insert(node *head)
{
    node *temp = head, *new_node;
    int num;
    new_node=memory();
    printf("Enter the number: ");
    scanf("%d",&num);
    new_node->data=num;
    if(head==0){
        head=new_node;
        new_node->next=head;
        return head;
    }
    else{
        while (temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->next=head;
        
    }
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
        while (temp->next != head)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("%d\t", temp->data);
            temp = temp->next;//just for checking whether the link list is circualar or not
        printf("%d\t", temp->data);

    }
    printf("\n");
}
node* delete_last(node * head){
    node * temp=head;
    if(head==NULL){
        printf("entered list is empty");
        return head;
    }
    else{
        while (temp->next->next!=head)
        {
            temp=temp->next;
        }
        temp->next=head;
        
    }
    return head;
}
void main()
{
    node *head = NULL;
    head=insert(head);
    head=insert(head);
    head=insert(head);
    display(head);
    head=delete_last(head);
    display(head);

    head=delete_last(head);
    display(head);//not created switch function 

}