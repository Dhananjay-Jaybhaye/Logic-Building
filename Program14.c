/*
    START
        Accept the total marks 
        Accept the obtained marks
        Calculate the percentage as (obtained / total) * 100
        Display the calculated percentage
    STOP
*/

#include<stdio.h>

float CalculatePercentage(int iObtained, int iTotal)
{
    float fPercentage = 0.0f;
    fPercentage = ((float)iObtained / (float)iTotal) * 100;
    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Enter the Obtained Marks : \n");
    scanf("%d",&iValue1);

    printf("Enter the Total Marks : \n");
    scanf("%d",&iValue2);

    fResult = CalculatePercentage(iValue1, iValue2);

    printf("Percentage is : %f\n",fResult);

    return 0;
}