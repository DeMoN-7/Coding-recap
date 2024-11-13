#include <stdio.h>
#include <stdlib.h>

// Typedef for the tree node structure
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// Function to create a new node
TreeNode* createNode(int value) {
    TreeNode *newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert nodes level-order for a complete binary tree
TreeNode* insertLevelOrder(int arr[], TreeNode* root, int i, int n) {
    if (i < n && arr[i] != -1) {
        TreeNode *temp = createNode(arr[i]);
        root = temp;
        root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n);
        root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

// Inorder traversal
void inorder(TreeNode *node) {
    if (node != NULL) {
        inorder(node->left);
        printf("%d ", node->data);
        inorder(node->right);
    }
}

// Preorder traversal
void preorder(TreeNode *node) {
    if (node != NULL) {
        printf("%d ", node->data);
        preorder(node->left);
        preorder(node->right);
    }
}

// Postorder traversal
void postorder(TreeNode *node) {
    if (node != NULL) {
        postorder(node->left);
        postorder(node->right);
        printf("%d ", node->data);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, -1, -1, 8, 9};  // Example binary tree array
    int n = sizeof(arr) / sizeof(arr[0]);

    TreeNode *root = insertLevelOrder(arr, root, 0, n);

    printf("Inorder Traversal: ");
    inorder(root);
    printf("\n");

    printf("Preorder Traversal: ");
    preorder(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postorder(root);
    printf("\n");

    return 0;
}
