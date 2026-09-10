#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){

    struct Node *first;
    first=(struct Node*)malloc(sizeof(struct Node));
    
    first->data=4;
    first->next=NULL;

    printf("Data in the first node: %d\n", first->data);

    return 0;
}