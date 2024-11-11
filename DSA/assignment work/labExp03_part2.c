#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype {
    int data;
    struct nodetype *next;
    struct nodetype *prev;
} node;

node *memory() {
    node *temp = (node *)malloc(sizeof(node));
    temp->next = 0;
    temp->prev = 0;
    return temp;
}

int size(node *head) {
    int count = 1;
    if (head == 0) {
        return 0;
    } else {
        node *temp = head;
        while (temp->next != 0) {
            count++;
            temp = temp->next;
        }
    }
    return count;
}

void display(node *head) {
    printf("\n\tLink list:-\n");
    if (head == 0) {
        printf("Link list is empty:\n");
    } else {
        node *temp = head;
        while (temp != 0) {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}

node *insert_atLast(node *head) {
    node *temp = head, *new_node;
    new_node = memory();
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    new_node->data = num;
    if (head == 0) {
        head = new_node;
    } else {
        while (temp->next != 0) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }
    return head;
}

node *ins_first(node *head) {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    node *new_node = memory();
    new_node->data = num;
    new_node->next = head;
    if (head != 0) {
        head->prev = new_node;
    }
    return new_node;
}

node *ins_at_pos(node *head) {
    node *temp = head, *new_node;
    int num, pos;
    printf("Enter the number: ");
    scanf("%d", &num);
    int siz = size(head);
    printf("Enter the position you want to enter: ");
    scanf("%d", &pos);
    if (pos > siz + 1) {
        printf("\nYou are trying to access an out-of-range element.\n");
    } else {
        new_node = memory();
        new_node->data = num;
        if (pos == 1) {
            return ins_first(head);
        } else {
            for (int i = 1; i < pos - 1; i++) {
                temp = temp->next;
            }
            new_node->next = temp->next;
            if (temp->next != 0) {
                temp->next->prev = new_node;
            }
            temp->next = new_node;
            new_node->prev = temp;
        }
    }
    return head;
}

node *del_last(node *head) {
    if (head == 0 || head->next == 0) {
        return 0;
    }
    node *temp = head;
    while (temp->next != 0) {
        temp = temp->next;
    }
    temp->prev->next = 0;
    free(temp);
    return head;
}

node *del_first(node *head) {
    if (head == 0) {
        return 0;
    }
    node *temp = head->next;
    if (temp != 0) {
        temp->prev = 0;
    }
    free(head);
    return temp;
}

node *del_certain_node(node *head) {
    int n;
    printf("Enter the index of node you want to delete: ");
    scanf("%d", &n);
    if (n > size(head)) {
        printf("Index out of bound\n");
        return head;
    }
    if (n == 1) {
        return del_first(head);
    }
    node *temp = head;
    for (int i = 1; i < n; i++) {
        temp = temp->next;
    }
    if (temp->next != 0) {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != 0) {
        temp->prev->next = temp->next;
    }
    free(temp);
    return head;
}

void main() {
    node *head = 0;
    int choice;
    do {
        printf("\nPress 0 for exit\nPress 1 for insert at last\nPress 2 for insert at first\nPress 3 for insert at position\nPress 4 for deleting last node\nPress 5 for deleting first node\nPress 6 for deleting certain nodes\nPress 7 for displaying all nodes\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                head = insert_atLast(head);
                break;
            case 2:
                head = ins_first(head);
                break;
            case 3:
                head = ins_at_pos(head);
                break;
            case 4:
                head = del_last(head);
                break;
            case 5:
                head = del_first(head);
                break;
            case 6:
                head = del_certain_node(head);
                break;
            case 7:
                display(head);
                break;
            default:
                break;
        }
    } while (choice != 0);
}
