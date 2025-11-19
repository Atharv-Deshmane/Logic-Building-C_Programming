#include<stdio.h>

int AdditionTwoNumbers(int iNo1 , int iNo2)
{
    int iSum = 0 ;
    iSum = iNo1 + iNo2 ;  
    return iSum ;                                 // Business Logic
}
int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;
    int iRet = 0 ;

    printf("enter first number : \n");
    scanf("%d",&iValue1);

    printf("enter second number : \n");
    scanf("%d",&iValue2);

    iRet = AdditionTwoNumbers(iValue1 , iValue2);
    
    printf("addition is :%d\n",iRet);

    return 0 ;
}