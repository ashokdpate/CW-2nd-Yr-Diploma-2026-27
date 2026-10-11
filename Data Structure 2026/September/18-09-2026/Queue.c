/*Write a code for implementing queue*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int data) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = data;
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return -1;
    }
    int data = queue[front];
    front++;
    return data;
}

int main() {
    int choice, data;
    while (1) {
        printf("1. Enqueue\n2. Dequeue\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                data = dequeue();
                if (data != -1) {
                    printf("Dequeued data: %d\n", data);
                }
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}   