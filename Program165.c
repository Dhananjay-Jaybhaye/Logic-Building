#include<stdio.h>

int CountCapital(char *str)
{
    int iResult = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iResult++;
        }
        str++;
    }

    return iResult;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Number of Capital Letters are : %d",iRet);
    return 0;
}