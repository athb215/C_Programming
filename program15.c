//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////
//
//  funtion name:       checkevenodd
//  description:        it is used to check even or odd     
//  input               integer
//  output              boolean
//  auhor               atharva bhutkar
//  date                10/10/2025
//////////////////////////////////////////////////////////////////////////////


bool CheckEvenOdd(int INo)
{
    

    if((INo % 2) ==0)
    {
        return true;
    }
    else{
        return false;
    }
}

//////////////////////////////////////////////////////////////////////////////
//
// entry point function of the application 
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :");

    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else{
        printf("%d is Odd number\n",iValue);
    }

    return 0;
}
