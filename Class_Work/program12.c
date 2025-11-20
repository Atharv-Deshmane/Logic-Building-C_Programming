/*
    Algorithm : 
                Start 
                    Accept number store as no
                    Divide no by 2
                        If the remender is zero then dispaly as Even 
                    otherwise
                        diplay as Odd
                Stop        



*/
#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0 ;
    
    iRem = iNo % 2;
    
    if (iRem == 0)
    {
        printf("It is Even Number :\n");
    }
    else
    {
        printf("It is Odd Number :\n");
    }
}
int main()
{
    int iValue = 0;
    prinf("enter number");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);
    
    return 0 ;
}
