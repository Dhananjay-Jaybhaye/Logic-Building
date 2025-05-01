// problem : count A B a b

// Input : Abiut CstAfB
// Output : 4

#include<stdio.h>

int Count(char *str)
{
    int iResult = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'b' || *str == 'A' || *str == 'B')
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

    iRet = Count(Arr);

    printf("count is: %d",iRet);
    return 0;
}