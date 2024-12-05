// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int marks ;
    printf("Enter your marks : ");
    scanf("%d" ,&marks);
    if(marks>=80)
    {
        printf("Grade A+");
    }
    else if(marks>=70)
    {
        printf("Grade A");
    }
        else if(marks>=65)
    {
        printf("Grade A-");
    }
        else if(marks>=60)
    {
        printf("Grade B");
    }
    
        else if(marks>=50)
    {
        printf("Grade C");
    }

    else 
    {
        printf("Grade F");
    }

    return 0;
}