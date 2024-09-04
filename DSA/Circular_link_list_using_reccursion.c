#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    struct nodetype *next;
    int data;
}node;
node *memory(){
    node * temp=(node*) malloc(sizeof(node));
    temp->next=NULL;
    return temp;
}
void main(){
    node * head;
}