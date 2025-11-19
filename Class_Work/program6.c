#include<stdio.h>

int Add(int a , int b)
{
    int sum = 0 ;
    sum = a + b ;  
    return sum ;                                 // Business Logic
}
int main()
{
    int i = 0 ;
    int j = 0 ;
    int ans = 0 ;

    printf("enter first number : \n");
    scanf("%d",&i);

    printf("enter second number : \n");
    scanf("%d",&j);

    ans = Add(i , j);
    
    printf("addition is :%d\n",ans);

    return 0 ;
}