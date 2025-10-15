/*
step1 : understand the problem statement
step2 : write the algorithm
step3 : decide the programming language
step4 : write the program
step5 : test the program
*/

/*
Algorithm
START
    Accept the first no as No1
    Accept the second no as No2
    if input is negative then convert it into positive
    perform additionn of N01 and N02
    display the addition on Screen
STOP
*/


/////////////////////////////////////////////////////////////////////////////////////////////
//
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Funcion Name :  AdditionTwoNumber  
//  Description :   It is used to perform adiition   
//  Input :         Float,Float
//  Output :        Float
//  Author ;        Atharva Bhutkar
//  Date :          09/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumber(float fNo1, float fNo2)
{
    float fSum = 0.0f;

    if( fNo1 < 0.0f)      //updater
    {
        fNo1 = -fNo1;
    }

    if( fNo2 < 0.0f)      //updater
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;  //business logic
    return fSum;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

   printf("enter first number : \n");
   scanf("%f",&fValue1);
   
   printf("enter first number : \n");
   scanf("%f",&fValue2);

   fRet  = AdditionTwoNumber(fValue1,fValue2);

   printf("Addition is : %f\n",fRet);

   return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test cases succefully handled by application
//
//  Input :10.5 Input2 : 3.2 output : 13.7
//  Input :10.5 Input2 : 3.2 output : 13.7
//  Input :10.5 Input2 : 3.2 output : 13.7
/////////////////////////////////////////////////////////////////////////////////////////////