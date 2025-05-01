#include<stdio.h>
int main()
{
    char Arr[30];

    printf("Enter Your Name : \n");
    scanf("%[^'\n]s",Arr);    

    printf("Your name is : %s",Arr);


    return 0;
}