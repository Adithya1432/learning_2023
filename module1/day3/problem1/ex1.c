#include<stdio.h>

int n;

int print_pattern()
{
    
  int i,j,k;
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=n;j++)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    }
    for(j=n;j>=1;j--)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    } 
    printf("\n");
  }
}
void main()
{
    
    printf("Enter the number of lines you want to print : ");
    scanf("%d", &n);
    print_pattern();
}