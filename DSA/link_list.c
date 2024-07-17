#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
void main(){
    int num;
    node * head=0;
    node * new_node,*temp;
    new_node=(node*)malloc(sizeof(node));
    printf("Enter the number: ");
    scanf("%d",&num);
    new_node->data=num;
    if (head==0){
        head=temp=new_node;
    }
    else{
        temp->next=new_node;
        temp=new_node;
    }
}
