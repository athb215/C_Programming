#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int INo)
{
    int iRem = 0 ;

    iRem = INo % 2;

    if(iRem == 0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :");

    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    printf("Result is : %d\n",bRet);

    return 0;
}