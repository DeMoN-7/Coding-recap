#include<stdio.h>
#include<stdlib.h>

typedef struct  nodetype{
    struct nodetype * left;
    int num;
    struct nodetype * right;

}node;
node * memory(){
    node * temp;
    temp= (node*) malloc(sizeof(node));
    temp->left=0;
    temp->right=0;
    return temp;
}
node * create(){
    node * new_node=memory();
    int n;
    printf("Enter the data and -1 to exit");
    scanf("%d",&n);
    if (n==-1)
    return NULL;
    new_node->num=n;
    printf("Enter left child of %d\n",n);
    new_node->left=create();    
    printf("Enter right child of %d\n",n);
    new_node->right=create();
    return new_node;

}
void inorder(node * root){
    if (root == NULL)
        return;
inorder(root->left);
printf("%d ", root->num);
inorder(root->right); 
}

void main(){
    node * root;
    root=create();
    inorder(root);
}