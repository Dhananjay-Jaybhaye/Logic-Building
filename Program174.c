#include<stdio.h>

int Count(char *str, char ch)  // Case Sensitive
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf("%c",&cValue);                    // problem in scanf

    iRet = Count(Arr, cValue);  

    printf("count of character : %d\n",iRet);

    return 0;
}