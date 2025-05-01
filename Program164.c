#include<stdio.h>

int CountSpace(char *str)
{
    int iResult = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = CountSpace(Arr);

    printf("Number of spaces are : %d",iRet);
    return 0;
}