#include<stdio.h>
int main()
{
    int no1, no2;
    printf("Enter two number : ");
    scanf("%d%d",&no1, &no2);
    if(no1>no2)
    {
        printf("Number1 is greatest=%d",no1);
    }
    else
    {
        printf("Number2 is greatest=%d", no2);
    }
    return 0;
}