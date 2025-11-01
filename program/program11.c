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

float AdditionTwoNumber(
                            float fNo1,             //First input
                            float fNo2              //Second input
                        )
{
    float fSum = 0.0f;                              //To store the result

    if( fNo1 < 0.0f)                                //updater
    {
        fNo1 = -fNo1;
    }

    if( fNo2 < 0.0f)                                 //updater
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                             //business logic
    return fSum;
}   //End of AdditionTwoNumber

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   float fValue1 = 0.0f, fValue2 = 0.0f;            //To accept user input
   float fRet = 0.0f;                               //to store the result

   printf("enter first number : \n");
   scanf("%f",&fValue1);
   
   printf("enter first number : \n");
   scanf("%f",&fValue2);

   fRet  = AdditionTwoNumber(fValue1,fValue2);      //Method call

   printf("Addition is : %f\n",fRet);

   return 0;
}   //End of Main

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test cases succefully handled by application
//
//  Input :10.5      Input2 : 3.2     output : 13.7
//  Input :-10.5     Input2 : 3.2     output : 13.7
//  Input :10.5      Input2 : -3.2    output : 13.7
//  Input :-10.5      Input2 : -3.2     output : 13.7
//  Input :10.5      Input2 : 0.0     output : 10.5
//
/////////////////////////////////////////////////////////////////////////////////////////////