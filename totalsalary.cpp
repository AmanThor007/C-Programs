#include<stdio.h>
int main(){

    int hra = 10;
    int da = 5;
    int tax = 500;
    int basicSalary;

    printf("\nEnter total salary of employee: ");
    scanf("%d", &basicSalary);
    float totalHra = basicSalary * hra / 100;
    float totalDa = basicSalary * da / 100;
    float totalSalary = basicSalary + totalHra + totalDa - tax;
    printf("Total Salary of employee: %f", totalSalary);
    
    return 0;
}