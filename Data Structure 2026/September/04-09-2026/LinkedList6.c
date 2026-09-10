#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){

    struct Node *head, *current;

    int num;
    printf("Enter Number of node want to add: ");
    scanf("%d",&num);

    head=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data for 1: ");
    scanf("%d",&head->data);
    head->next=NULL;

    current=head;

    for (int i = 2; i <=num; i++)
    {
        current->next=(struct Node *)malloc(sizeof(struct Node));
        current=current->next;
        printf("Enter the data for %d: ", i);
        scanf("%d",&current->data);
        current->next=NULL;
    }

    return 0;
}
