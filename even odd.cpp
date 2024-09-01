#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Postive");
    }
    else
    {
        if(num<0)
        {
            printf("Negative");
        }
        else
        {
            printf("Neutral");
        }
    }
    return 0;
}   