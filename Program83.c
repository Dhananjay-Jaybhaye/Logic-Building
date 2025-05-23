#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{   
    int iCnt = 0, iEvenCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCount++;
        }
    }

    return iEvenCount;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = CountEven(ptr,iLength);

    printf("Total number of even elements are : %d\n",iRet);

    free(ptr);

    return 0;
}