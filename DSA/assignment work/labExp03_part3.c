#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Node structure for each task
typedef struct TaskNode {
    char task[100];
    struct TaskNode *next;
    struct TaskNode *prev;
} TaskNode;

// Function to allocate memory for a new task node
TaskNode *createTaskNode(const char *taskName) {
    TaskNode *newTask = (TaskNode *)malloc(sizeof(TaskNode));
    if (!newTask) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    strcpy(newTask->task, taskName);
    newTask->next = NULL;
    newTask->prev = NULL;
    return newTask;
}

// Function to add a task to the end of the to-do list
TaskNode *addTask(TaskNode *head, const char *taskName) {
    TaskNode *newTask = createTaskNode(taskName);
    if (!head) {
        return newTask;
    }
    TaskNode *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newTask;
    newTask->prev = temp;
    return head;
}

// Function to display all tasks in the to-do list
void displayTasks(TaskNode *head) {
    printf("\nYour To-Do List:\n");
    if (!head) {
        printf("No tasks found.\n");
        return;
    }
    TaskNode *temp = head;
    while (temp != NULL) {
        printf("- %s\n", temp->task);
        temp = temp->next;
    }
}

// Function to delete a task at a specified position
TaskNode *deleteTask(TaskNode *head, int position) {
    if (!head) {
        printf("No tasks to delete.\n");
        return NULL;
    }
    TaskNode *temp = head;
    for (int i = 1; i < position && temp != NULL; i++) {
        temp = temp->next;
    }
    if (!temp) {
        printf("Invalid position.\n");
        return head;
    }
    if (temp->prev) {
        temp->prev->next = temp->next;
    }
    if (temp->next) {
        temp->next->prev = temp->prev;
    }
    if (temp == head) {
        head = temp->next;
    }
    free(temp);
    printf("Task deleted.\n");
    return head;
}

// Function to free all nodes in the list to prevent memory leaks
void freeTasks(TaskNode *head) {
    TaskNode *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// Main function to demonstrate the to-do list manager
int main() {
    TaskNode *head = NULL;
    int choice, pos;
    char task[100];

    do {
        printf("\nTo-Do List Manager:\n");
        printf("1. Add Task\n");
        printf("2. Display Tasks\n");
        printf("3. Delete Task\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume newline after choice input

        switch (choice) {
            case 1:
                printf("Enter the task: ");
                fgets(task, sizeof(task), stdin);
                task[strcspn(task, "\n")] = 0; // Remove newline character
                head = addTask(head, task);
                break;
            case 2:
                displayTasks(head);
                break;
            case 3:
                printf("Enter the position of the task to delete: ");
                scanf("%d", &pos);
                head = deleteTask(head, pos);
                break;
            case 0:
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    } while (choice != 0);

    // Free allocated memory before exiting
    freeTasks(head);
    printf("Exiting To-Do List Manager.\n");

    return 0;
}
