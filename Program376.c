#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void push(PPNODE head, int No)  // InsertFirst
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

int pop(PPNODE head)   // DeleteFirst
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
{
    printf("Elements of stack are : \n");

    while(head != NULL)
    {
        printf("| %d |\n",head->data);
        head = head->next;
    }
}

int Count(PNODE head)
{
    int iCount = 0;

    while(head != NULL)
    {
        iCount++;
        head = head->next;
    }
    return iCount;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    push(&first,101);
    push(&first,51);
    push(&first,21);
    push(&first,11);
    
    Display(first);

    iRet = pop(&first);
    printf("Poped element is : %d\n",iRet);

    Display(first);

    iRet = pop(&first);
    printf("Poped element is : %d\n",iRet);
    
    Display(first);

    iRet = Count(first);
    printf("Number of elements are : %d\n",iRet);

    return 0;
}