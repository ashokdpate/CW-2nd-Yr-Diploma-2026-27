#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create linked list
struct Node* createList(int num)
{
    struct Node *head, *current;

    head = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data for node 1: ");
    scanf("%d", &head->data);

    head->next = NULL;

    current = head;

    for (int i = 2; i <= num; i++)
    {
        current->next = (struct Node *)malloc(sizeof(struct Node));

        current = current->next;

        printf("Enter the data for node: %d ", i);
        scanf("%d", &current->data);

        current->next = NULL;
    }

    return head;
}

// Function to print linked list
void displayList(struct Node *head)
{
    struct Node *temp;

    printf("\nLinked List:\n");

    temp = head;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    struct Node *head;

    int num;

    printf("Enter the number of node want to add: ");
    scanf("%d", &num);

    head = createList(num);

    displayList(head);

    return 0;
}