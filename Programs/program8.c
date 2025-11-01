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
    perform additionn of N01 and N02
    display the addition on Screen
STOP
*/
#include<stdio.h>

float AdditionTwoNumber(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    fSum = fNo1 + fNo2;  //business logic
    return fSum;
}

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