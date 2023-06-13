#include<stdio.h>

void main()
{
    
    int a, b;
    
    printf("Enter two numbers : ");
    scanf("%d\n%d", &a, &b);

    (a>b) ? printf("%d is greater",a):printf("%d is greater",b);

    return 0;
}