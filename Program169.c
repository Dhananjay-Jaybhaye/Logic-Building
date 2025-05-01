// a    e   i   o   u

#include<stdio.h>

int CountVowels(char *str)
{
    int iResult = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
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

    iRet = CountVowels(Arr);

    printf("count of vowels is: %d",iRet);
    return 0;
}