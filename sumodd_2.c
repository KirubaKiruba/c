#include<stdio.h>
void main()
{
int num,d1,d2,d3;
printf("Enter the 3 digit number:\n");
scanf("%d",&num);
d1=num%10;
d2=(num/10)%10;
d3=(num/100)%10;
num=d1*(d1%2)+d2*(d2%2)+d3*(d3%2);
printf("num  = %d",num);
}
