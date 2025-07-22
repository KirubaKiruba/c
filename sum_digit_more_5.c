#include<stdio.h>
void main()
{
int num,d1,d2,d3;
printf("Enter the 3 digit number:\n");
scanf("%d",&num);
d1=num%10;
d2=(num/10)%10;
d3=(num/100)%10;
num=d1*(d1>5)+d2*(d2>5)+d3*(d3>5);
printf("num  = %d",num);
}
