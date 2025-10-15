/*
START 
    accept number and store as NO
    divide NO by 2
        if the remainder is 0
    then display as Even 
        otherwise display as Odd
STOP
*/



#include<stdio.h>

void CheckEvenOdd(int INo)
{
    int iRem = 0 ;

    iRem = INo % 2;

    if(iRem == 0)
    {
        printf("It is Even number\n");
    }
    else{
        printf("It is Odd number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");

    scanf("%d",&iValue);

    CheckEvenOdd(iValue);


    return 0;
}