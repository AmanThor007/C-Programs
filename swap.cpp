#include<stdio.h>
int main()
{
    float no1, no2, temp;
    printf("\nEnter no1 and no2: ");
    scanf("%f%f", &no1, &no2);
    printf("\nNumbers before swapping: no1 = %f & no2 = %f", no1, no2);
    temp = no1;
    no1 = no2;
    no2 = temp;
    printf("\nNumbers after swapping: no1 = %f & no2 = %f", no1, no2);
    return 0;
}