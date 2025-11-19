#include<stdio.h>

int main()
{
    int i = 0 ;
    int j = 0 ;
    int ans = 0 ;

    printf("enter first number : \n");
    scanf("%d",&i);

    printf("enter second number : \n");
    scanf("%d",&j);

    ans = i + j ;                                   // business logic

    printf("addition is :%d\n",ans);

    return 0 ;
}