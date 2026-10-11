// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// int main(){

//     struct Node *head, *current;

//     int num;
//     printf("Enter Number of node want to add: ");
//     scanf("%d",&num);

//     head=(struct Node *)malloc(sizeof(struct Node));
//     printf("Enter the data for 1: ");
//     scanf("%d",&head->data);
//     head->next=NULL;

//     current=head;

//     for (int i = 2; i <=num; i++)
//     {
//         current->next=(struct Node *)malloc(sizeof(struct Node));
//         current=current->next;
//         printf("Enter the data for %d: ", i);
//         scanf("%d",&current->data);
//         current->next=NULL;

//     }
        
//      // Print linked list
//     printf("\nLinked List:\n");
//      current = head;

//      while (current!=NULL)
//      {
//         printf("%4d ->",current->data);
//         current=current->next;
//      }
//      printf("NULL\n");
     

//     return 0;
// }








#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){

    struct Node *head , *current , *temp;

    int num;
    printf("Enter the number of node want to add: ");
    scanf("%d",&num);

    head=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data for node 1: ");
    scanf("%d", &head->data);
    head->next=NULL;

    current=head;

    for (int i = 2; i <=num; i++)
    {
        current->next=(struct Node *)malloc(sizeof(struct Node));
        current=current->next;

        printf("Enter the data for node: %d " ,i);
        scanf("%d",&current->data);
        current->next=NULL;
    }

    // Print linked list
     printf("\nLinked List:\n");

    temp=head;
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

    return 0;
}