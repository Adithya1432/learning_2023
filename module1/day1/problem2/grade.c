#include<stdio.h>

void main()
{
    int marks;

    printf("Enter marks : ");
    scanf("%d", &marks);
    
    if(marks>=90 && marks<=100)
    {
        printf("GRADE A");
    }

    else if(marks>=75 && marks<=89)
    {
        printf("GRADE B");
    }

    else if(marks>=60 && marks<=74)
    {
        printf("GRADE C");
    }

    else if(marks>=50 && marks<=59)
    {
        printf("GRADE D");
    }

    else if(marks>=0 && marks<=49)
    {
        printf("GRADE F");
    }

    else
    {
        printf("Enter correct marks");
    }
}