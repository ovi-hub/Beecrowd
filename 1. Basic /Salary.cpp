#include <stdio.h>
int main()
{
        float hour,amount,salary;
        int num;
        printf("Employee's Serial Number : ");
        scanf("%d",&num);
        printf("Employee's work hour per month :");
        scanf("%f",&hour);
        printf("Total Work amount : ");
        scanf("%f",&amount);
        salary=amount*hour;
        printf("Employees No.%d your salary  is :  %.2f Tk ",num,salary);
        return 0;
}