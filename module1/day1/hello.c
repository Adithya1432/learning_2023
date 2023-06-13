#include<stdio.h>

int add(int a, int b)
{
    int c = a+b;
    return c;
}

int sub(int a, int b)
{
    int c = a - b;
    return c;
}
int main()
{

    int x,y;
    x = add(5,6);
    y = sub(8,6);
    printf("%d\n", x);
    printf("%d\n", y);
}