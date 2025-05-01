#include<stdio.h>

int CountSmall(char *str)
{
    int iResult = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);

    printf("Number of Small Letters are : %d",iRet);
    return 0;
}