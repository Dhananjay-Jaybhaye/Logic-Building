#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[30];
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};


    printf("Please enter the file name that you want to open\n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

    read(fd,Arr,8);

    printf("Data from the file is : %s\n",Arr);

    read(fd,Brr,5);

    printf("Data from the file is : %s\n",Brr);

    return 0;
}