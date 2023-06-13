#include<stdio.h>

void main()
{
    
    int a, b;
    
    printf("Enter two numbers : ");
    scanf("%d\n%d", &a, &b);

    if(a>b)
    {
        printf("%d is greater number", a);
    }

    else if(a<b)
    {
        printf("%d is greater number", b);
    }

    else
    {
        printf("%d and %d are same values", a,b);
    }
    
    return 0;
}