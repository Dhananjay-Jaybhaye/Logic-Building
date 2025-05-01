#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter Your Name : \n");
    scanf("%s",Arr);    // Accepts till first space only

    printf("Your name is : %s",Arr);

    return 0;
}