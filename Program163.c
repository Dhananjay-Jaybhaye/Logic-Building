#include<stdio.h>

int strlenX(char *str)
{
    int iResult = 0;

    while(*str != '\0')
    {
        iResult++;
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

    iRet = strlenX(Arr);

    printf("Length of string is : %d",iRet);
    return 0;
}