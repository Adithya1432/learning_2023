#include<stdio.h>
#include<conio.h>
void main()
{
    int num1, num2;
    char a;

    printf("Enter the operator ");
    scanf("%c", &a);

    printf("Enter Number1:");
    scanf("%d", &num1);

    printf("Enter Number2:");
    scanf("%d", &num2);

    switch(a)
  {
  case '+' : printf("Result : %d ",num1+num2);break;
  case '-' : printf("Result : %d ",num1-num2);break;
  case '*' : printf("Result : %d ",num1*num2);break;
  case '/' : printf("Result : %d ",num1/num2);break;
  default  : printf("Invalid operator....");
  }
    getch();
}