#include<stdio.h>
#include<stdlib.h>

void ReverseDisplay(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Reverse order : \n");
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        printf("%d\t",Arr[iCnt]);
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    ReverseDisplay(ptr,iLength);

    free(ptr);

    return 0;
}
