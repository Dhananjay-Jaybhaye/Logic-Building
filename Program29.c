#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}