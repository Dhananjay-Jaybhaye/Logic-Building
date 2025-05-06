#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, PPNODE tail, int No){}
void InsertLast(PPNODE head, PPNODE tail, int No){}
void InsertAtPos(PPNODE head, PPNODE tail, int No, int ipos){}

void DeleteFirst(PPNODE head, PPNODE tail){}
void DeleteLast(PPNODE head, PPNODE tail){}
void DeleteAtPos(PPNODE head, PPNODE tail, int ipos){}

void Display(PNODE head, PNODE tail){}
int Count(PNODE head, PNODE tail)
{
    return 0;
}

int main()
{
    PNODE first;
    PNODE last;

    return 0;
}