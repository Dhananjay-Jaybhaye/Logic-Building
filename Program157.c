#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Entered string is : %s\n",Arr);

    return 0;
}