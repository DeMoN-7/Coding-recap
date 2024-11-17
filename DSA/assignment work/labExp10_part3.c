#include <stdio.h>
#include <stdlib.h>

struct PriorityQueue {
    int* arr;
    int size;
    int capacity;
};

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(struct PriorityQueue* pq, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < pq->size && pq->arr[left] > pq->arr[largest]) {
        largest = left;
    }
    if (right < pq->size && pq->arr[right] > pq->arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(&pq->arr[i], &pq->arr[largest]);
        heapify(pq, largest);
    }
}

void insert(struct PriorityQueue* pq, int value) {
    if (pq->size == pq->capacity) {
        printf("Priority Queue is full\n");
        return;
    }

    pq->arr[pq->size] = value;
    int i = pq->size;
    pq->size++;

    while (i != 0 && pq->arr[(i - 1) / 2] < pq->arr[i]) {
        swap(&pq->arr[(i - 1) / 2], &pq->arr[i]);
        i = (i - 1) / 2;
    }
}

int removeHighestPriority(struct PriorityQueue* pq) {
    if (pq->size == 0) {
        printf("Priority Queue is empty\n");
        return -1;
    }

    int root = pq->arr[0];
    pq->arr[0] = pq->arr[pq->size - 1];
    pq->size--;
    heapify(pq, 0);

    return root;
}

void display(struct PriorityQueue* pq) {
    for (int i = 0; i < pq->size; i++) {
        printf("%d ", pq->arr[i]);
    }
    printf("\n");
}

int main() {
    int capacity;
    printf("Enter capacity of priority queue: ");
    scanf("%d", &capacity);

    struct PriorityQueue pq;
    pq.arr = (int*)malloc(capacity * sizeof(int));
    pq.size = 0;
    pq.capacity = capacity;

    int choice, value;
    do {
        printf("\n1. Insert\n2. Remove Highest Priority\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(&pq, value);
                break;

            case 2:
                value = removeHighestPriority(&pq);
                if (value != -1) {
                    printf("Removed highest priority element: %d\n", value);
                }
                break;

            case 3:
                printf("Priority Queue: ");
                display(&pq);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    free(pq.arr);
    return 0;
}
