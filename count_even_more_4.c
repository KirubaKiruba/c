#include<stdio.h>
void main()
{
int num,d1,d2,d3,d4;
printf("Enter the 3 digit number:\n");
scanf("%d",&num);
d1=num%10;
d2=(num/10)%10;
d3=(num/100)%10;
d4=(num/1000)%10;
d1=(num>=1)*((d1%2==0)*(d1>4));
d2=(num>=10)*((d2%2==0)*(d2>4));
d3=(num>=100)*((d3%2==0)*(d3>4));
d4=(num>=1000)*((d4%2==0)*(d3>4));
num=d1+d2+d3+d4;
printf("num  = %d",num);
}
