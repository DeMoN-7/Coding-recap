#include <stdio.h>
#define MAX 15  // Maximum elements in the binary tree array

void inorder(int arr[], int i, int n) {
    if (i < n && arr[i] != -1) {
        inorder(arr, 2 * i + 1, n);
        printf("%d ", arr[i]);
        inorder(arr, 2 * i + 2, n);
    }
}

void preorder(int arr[], int i, int n) {
    if (i < n && arr[i] != -1) {
        printf("%d ", arr[i]);
        preorder(arr, 2 * i + 1, n);
        preorder(arr, 2 * i + 2, n);
    }
}

void postorder(int arr[], int i, int n) {
    if (i < n && arr[i] != -1) {
        postorder(arr, 2 * i + 1, n);
        postorder(arr, 2 * i + 2, n);
        printf("%d ", arr[i]);
    }
}

int main() {
    int tree[MAX] = {1, 2, 3, 4, 5, 6, 7, -1, -1, 8, 9};  // Example binary tree array
    int n = 11;  // Number of elements in the tree

    printf("Inorder Traversal: ");
    inorder(tree, 0, n);
    printf("\n");

    printf("Preorder Traversal: ");
    preorder(tree, 0, n);
    printf("\n");

    printf("Postorder Traversal: ");
    postorder(tree, 0, n);
    printf("\n");

    return 0;
}
