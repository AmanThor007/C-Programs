#include<stdio.h>
int main()
{
    int age;
    char gen;
    printf("Enter age and gender (f/m) =");
    scanf("%d%c", &age, &gen);
    if(gen=='M'||'m')
    {
        if(age>=25)
        {
            printf("Insurance");
        }
        else
        {
            printf("not eligible");
        }
    }
        else
        {
            if(gen=='F'||'f')
            {
                if(age>=21)
                {
                    printf("insurance");
                }
                else
                {
                    printf("not eligible");
                }
            }
        }
}