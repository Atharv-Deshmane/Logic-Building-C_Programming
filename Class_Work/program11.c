/*
    Algorithm 

    Start
        Accept first number as no1
        Accept first number as no2
        if the input is negative then convert it into positive
        perform addition of no1 and no2
        display the addition screen
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Required header file
//
/////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name : AdditionTwoNumbers 
//  Description :   It is used to perform addition
//  Input :         Float ,Float
//  Output :        Float
//  Author :        Atharv Ganesh Deshmane
//  Date :          09/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1                         // First input
                            float fNo2                         // Second input
                        )
{
    float fSum = 0.0f ;                                        // To store the result

    if(fNo1 < 0.0f)                                            // Updator
    {
        fNo1 = -fNo1;
    }
    if(fNo2 < 0.0f)                                            // Updator
    {
        fNo2 = -fNo2;
    }
    fSum = fNo1 + fNo2 ;  
    return fSum ;                                              // Business Logic

}   // End of AdditionTwoNumber   

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for application
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f , float fValue2 = 0.0f ;              // To accept user input
    float fRet    = 0.0f ;                                     // To store the result

    printf("enter first number : \n"); 
    scanf("%f",&fValue1);

    printf("enter second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1 , fValue2);              // Methhod call
    
    printf("addition is :%f\n",fRet);

    return 0 ;

}   //  End of main


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handled by the application
//
//  Input : 10.5       Input : 3.2      Output : 13.7
//  Input :- 10.5      Input : 3.2      Output : 13.7
//  Input : 10.5       Input : -3.2     Output : 13.7
//  Input : -10.5      Input : -3.2     Output : 13.7
//  Input : 10.5       Input : 0.0      Output : 13.7
//
/////////////////////////////////////////////////////////////////////////////////////////////////