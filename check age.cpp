#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);
    if(age>=60)
    {
        printf("The person is senior citizen");
    }
    else
    {
        printf("The person is not senior citizen");
    }
    return 0;
}