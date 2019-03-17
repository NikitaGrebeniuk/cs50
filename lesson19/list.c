#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
  int value;
  struct node* next;
} node;

void printlist(node * head);

int main(void){
    node * head = NULL;
    head = malloc(sizeof(node));

    if(head == NULL){
        return 1;
    }

    head ->value = 1;
    //head ->next = NULL
    head->next = malloc(sizeof(node));
    head->next ->value = 2;
    head->next->next=malloc(sizeof(node));
    head->next->next->value=3;
    head->next->next->next = NULL;

    printlist(head);

    return 0;
}


void printlist(node * head)
{
    node * current = head;

    while (current !=NULL){
        printf("Value:%d\n", current ->value);
        printf("Address:%p\n", (void *)current ->next);
        current = current->next;
    }
}