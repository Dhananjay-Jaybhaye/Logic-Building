#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void Push(PPNODE head, int No)  // InsertFirst
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

int Pop(PPNODE head)   // DeleteFirst
{}

void Display(PNODE head)
{}

int Count(PNODE head)
{}

int main()
{
    PNODE first = NULL;

    push(&first,51);
    push(&first,21);
    push(&first,11);

    return 0;
}