#include <stdio.h>
#include <stdlib.h>

// Typedef for the tree node structure
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// Queue node structure for Level-order traversal
typedef struct QueueNode {
    TreeNode *treeNode;
    struct QueueNode *next;
} QueueNode;

// Queue structure to assist with Level-order traversal
typedef struct Queue {
    QueueNode *front;
    QueueNode *rear;
} Queue;

// Function to create a new tree node
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

// Functions for Level-order traversal using Queue

// Function to initialize a queue
Queue* createQueue() {
    Queue *q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}

// Function to add a tree node to the queue
void enqueue(Queue *q, TreeNode *node) {
    QueueNode *newNode = (QueueNode*)malloc(sizeof(QueueNode));
    newNode->treeNode = node;
    newNode->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

// Function to remove a tree node from the queue
TreeNode* dequeue(Queue *q) {
    if (q->front == NULL) return NULL;
    QueueNode *temp = q->front;
    TreeNode *node = temp->treeNode;
    q->front = q->front->next;
    if (q->front == NULL) q->rear = NULL;
    free(temp);
    return node;
}

// Level-order traversal
void levelOrder(TreeNode *root) {
    if (root == NULL) return;
    Queue *q = createQueue();
    enqueue(q, root);
    while (q->front != NULL) {
        TreeNode *node = dequeue(q);
        printf("%d ", node->data);
        if (node->left != NULL) enqueue(q, node->left);
        if (node->right != NULL) enqueue(q, node->right);
    }
    free(q);
}

int main() {
    int n;
    printf("Enter the number of nodes in the binary tree: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the binary tree (use -1 for NULL nodes):\n");
    for (int i = 0; i < n; i++) {
        printf("Node %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    TreeNode *root = insertLevelOrder(arr, root, 0, n);

    printf("\nInorder Traversal: ");
    inorder(root);
    printf("\n");

    printf("Preorder Traversal: ");
    preorder(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postorder(root);
    printf("\n");

    printf("Level-order Traversal: ");
    levelOrder(root);
    printf("\n");

    return 0;
}
