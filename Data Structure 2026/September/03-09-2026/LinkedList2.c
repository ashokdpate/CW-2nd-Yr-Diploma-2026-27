#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){

    struct Node *first ,*second;
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));

    first->data=4;
    first->next=second;
    second->data=8;
    second->next=NULL;

    printf("Data in the first node: %d\n", first->data);    
    printf("Data in the second node: %d\n", second->data);
    

    return 0;
}