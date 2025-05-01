#include<stdio.h>

float CircleArea(float fRad)
{
    float fArea = 0.0f;

    fArea = 3.14f * fRad * fRad;

    return fArea;
}

int main()
{
    float fRet = 0.0f;
    float fRadius = 0.0f;

    printf("Enter the Radius of Circle \n");
    scanf("%f",&fRadius);

    fRet = CircleArea(fRadius);

    printf("Area of Circle is : %f",fRet);

    return 0;
}