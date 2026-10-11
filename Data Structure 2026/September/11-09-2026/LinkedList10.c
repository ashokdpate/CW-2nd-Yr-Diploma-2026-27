

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

// Function to count nodes
int countNode(struct Node *head)
{
    struct Node *temp;
    int count = 0;

    temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}



// Function to search a node
void searchNode(struct Node *head)
{
    struct Node *temp;
    int search, position = 1, found = 0;

    printf("\nEnter the data to search: ");
    scanf("%d", &search);

    temp = head;

    while (temp != NULL)
    {
        if (temp->data == search)
        {
            printf("Node found at position %d\n", position);
            found = 1;
            break;
        }

        temp = temp->next;
        position++;
    }

    if (found == 0)
    {
        printf("Node not found\n");
    }
}


int main()
{
    struct Node *head;

    int num,count;

    printf("Enter the number of node want to add: ");
    scanf("%d", &num);

    head = createList(num);

    displayList(head);

    count=countNode(head);
    printf("\nTotal number of node are : %d\n" ,count);

    searchNode(head);
    return 0;
}


