/*
Step 1 - understand the problem statement
Step 2 - write the algorithm
Step 3 - decide the programming language
Step 4 - write the code
Step 5 - test the code
/*

/*
    Algorithm 

    Start
        Accept first number as no1
        Accept first number as no2
        perform addition of no1 and no2
        display the addition screen
    STOP
/*/


#include<stdio.h>

float AdditionTwoNumbers(float fNo1 , float fNo2)
{
    float fSum = 0.0f ;
    fSum = fNo1 + fNo2 ;  
    return fSum ;                                 // Business Logic
}
int main()
{
    float fValue1 = 0.0f ;
    float fValue2 = 0.0f ;
    float fRet = 0.0f ;

    printf("enter first number : \n");
    scanf("%f",&fValue1);

    printf("enter second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1 , fValue2);
    
    printf("addition is :%f\n",fRet);

    return 0 ;
}