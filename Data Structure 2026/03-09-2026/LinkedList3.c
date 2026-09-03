#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){

    struct Node *first ,*second, *third;
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    

    first->data=4;
    first->next=second;
    second->data=8;
    second->next=third;
    third->data=12;
    third->next=NULL;

    printf("Data in the first node: %d\n", first->data);
    printf("Data in the second node: %d\n", second->data);
    printf("Data in the third node: %d\n", third->data);

    return 0;
}