#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int graph[MAX][MAX];
int visited[MAX];
int queue[MAX];
int top = -1, front = -1, rear = -1;

// Function to perform DFS
void DFS(int vertex, int n) {
    visited[vertex] = 1;
    printf("%d ", vertex);
    
    for (int i = 0; i < n; i++) {
        if (graph[vertex][i] == 1 && !visited[i]) {
            DFS(i, n);
        }
    }
}

// Function to perform BFS
void BFS(int start, int n) {
    visited[start] = 1;
    queue[++rear] = start;
    
    while (front != rear) {
        int vertex = queue[++front];
        printf("%d ", vertex);
        
        for (int i = 0; i < n; i++) {
            if (graph[vertex][i] == 1 && !visited[i]) {
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
}

// Main function
int main() {
    int n, e, i, j, choice, start;
    
    // Initialize graph and visited array
    for (i = 0; i < MAX; i++) {
        visited[i] = 0;
        for (j = 0; j < MAX; j++) {
            graph[i][j] = 0;
        }
    }
    
    // Take input for number of vertices and edges
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the number of edges: ");
    scanf("%d", &e);
    
    // Take input for edges
    printf("Enter the edges (u v) where u and v are vertices:\n");
    for (i = 0; i < e; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1; // For an undirected graph
    }
    
    // Menu for BFS or DFS
    printf("Choose the traversal technique:\n");
    printf("1. Depth-First Search (DFS)\n");
    printf("2. Breadth-First Search (BFS)\n");
    scanf("%d", &choice);
    
    printf("Enter the starting vertex for traversal: ");
    scanf("%d", &start);
    
    // Perform the selected traversal
    printf("Traversal order: ");
    if (choice == 1) {
        DFS(start, n);
    } else if (choice == 2) {
        BFS(start, n);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
