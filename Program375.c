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
{
    int no = -1;
    PNODE temp = NULL;

    if(*head == NULL)
    {
        printf("Stack is empty\n");
    }
    else if((*head)->next == NULL)
    {
        no = (*head)->data;
        free(*head);
        *head = NULL;
    }
    else
    {
        no = (*head)->data;
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    return no;
}

void Display(PNODE head)
{}

int Count(PNODE head)
{}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    Push(&first,51);
    Push(&first,21);
    Push(&first,11);
    
    iRet = Pop(&first);
    printf("Poped element is : %d\n",iRet);

    iRet = Pop(&first);
    printf("Poped element is : %d\n",iRet);

    return 0;
}