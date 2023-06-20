#include<stdio.h>

void main()
{

    int roll_no;
    char name[100];
    float phy, math, che;
   

    printf("Enter Roll No : ");
    scanf("%d", &roll_no);
    

    printf("Enter Name : ");
    scanf(" %[^\n]s", name);
    
    
    
    printf("Enter marks : ");
    scanf("%f\n%f\n%f", &phy, &math, &che);

    float total = phy + math + che;

    float percentage = (total/300) *100;

    
    printf("Roll No : %d\n", roll_no);
    printf("Name : %s\n", name);
    printf("Total : %f\n", total);
    printf("Percentage : %f\n", percentage);  
    
}